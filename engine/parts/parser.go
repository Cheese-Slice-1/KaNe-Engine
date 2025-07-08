package parts

import (
	. "fmt"
	// "os"
	. "strings"
	"errors"
)

/*
	esta función analiza y separa el documento en declaraciones

	ejemplo:
	
	archivo:
	4/4, 120, jpn-ro;
	defoko;
	R:F, a:D4:F, a:C4:16-8, a:E4:16-8;

	analizado:
	[][]string{
		[]string{"4/4", "120", "jpn-ro"},
		[]string{"defoko"},
		[]string{"R:F", "a:D4:F", "a:C4:16-8", "a:E4:16-8"}
	}
*/

func ParseFile(content string) ([][]string, error) {
	fmt.Println("Parsing file content...")

	lines := Split(content, ";")

	var parsedLines [][]string

	for _, line := range lines {
		declarations := Split(line, ",")
		for i, declaration := range declarations {
			declarations[i] = TrimSpace(declaration) // ej: ["4/4", " 120", " jpn-ro"] --> ["4/4", "120", "jpn-ro"]
		}
		parsedLines = append(parsedLines, declarations)
	}

	if len(parsedLines) > 3  {
		return parsedLines, errors.New("Error: The file must contain 3 lines, but currently has " + fmt.Sprint(len(parsedLines)))
	}

	return parsedLines, checkContent(parsedLines)
}

func checkContent(content [][]string) error {
	errorsFound := []string{}
	
	for i, line := range content {

		// C4:F, :F, :16-8, r:f/R:F
		switch i {
		case 0:
			if len(line) < 3 {
				errorsFound = append(errorsFound, "Line 1 must contain at least 3 elements (time signature, BPM, and language)")
			}
		case 1:
			if len(line) < 1 {
				errorsFound = append(errorsFound, "Line 2 must only contain the singer's name")
			}
		case 2:
			for i, declaration := range line {
				if !ContainsAny(declaration, ":") && ContainsAny(declaration, "0123456789F") {
					errorsFound = append(errorsFound, Sprintf("Note %d at line 3 lacks either a separator (:) between note name and duration, or both separator (:) and note duration", i+1))
				} else if ContainsAny(declaration, ":") && !ContainsAny(declaration, "0123456789Ff") {
					errorsFound = append(errorsFound, Sprintf("Note %d at line 3 has a separator (:) but no note duration", i+1))
				} else if !ContainsAny(declaration, "ABCDEFRabcdefr") {

				}
			}
		}
	}
	
	return fmt.Errorf("%d error(s) found:\n- %s", len(errorsFound), Join(errorsFound, "\n- "))
}

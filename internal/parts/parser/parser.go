package parser

import (
	"fmt"
	// "os"
	"errors"
	"strings"
)

type NoteType int

const (
	HalfNote    NoteType = 2
	QuarterNote NoteType = 4
	EighthNote  NoteType = 8
)

type Signature struct {
	numerator   int
	denominator NoteType
}

/*
	esta función analiza y separa el documento en declaraciones

	ejemplo:

	archivo:
	4/4, 120, jpn-ro;
	defoko;
	R:F, a:D4:F, a:C4:16-8, a:E4:16-8;

	devuelve:
	[][]string{
		[]string{"4/4", "120", "jpn-ro"},
		[]string{"defoko"},
		[]string{"R:F", "a:D4:F", "a:C4:16-8", "a:E4:16-8"}
	}
*/

func ParseFile(content string) ([][]string, error) {
	fmt.Println("Parsing file content...")

	if !strings.ContainsAny(content, ";,") {
		return nil, errors.New("project file isn't properly formatted, it lacks semicolons (;) and commas (,)")
	}

	lines := strings.Split(content, ";")

	var parsedLines [][]string

	for _, line := range lines {
		if line == "" {
			continue
		}

		declarations := strings.Split(line, ",")
		for j, declaration := range declarations {
			declarations[j] = strings.TrimSpace(declaration) // ej: ["4/4", " 120", " jpn-ro"] --> ["4/4", "120", "jpn-ro"]
		}
		parsedLines = append(parsedLines, declarations)
	}

	if len(parsedLines) > 3 {
		return parsedLines, fmt.Errorf("project file must contain 3 lines or less, but currently has %v", len(parsedLines))
	}

	err := checkContent(parsedLines)

	if err != nil {
		return parsedLines, err
	}

	fmt.Println("File content parsed successfully!")

	return parsedLines, nil
}

func checkContent(content [][]string) error {
	errorsFound := []string{}

	for i, line := range content {
		// C4:F, :F, :16-8, r:f/R:F :f2/:F2 C516-8 C4:
		switch i {
		case 0:
			fmt.Println("Analysing line 1...")

			if len(line) < 3 || len(line) > 3 {
				errorsFound = append(errorsFound, "Line 1 must contain at least 3 elements (time signature, BPM, and language)")
				continue
			}

			for j, option := range line {
				switch j {
				case 0:
					if !strings.ContainsAny(option, "0123456789") && !strings.Contains(option, ":") {
						errorsFound = append(errorsFound, fmt.Sprintf("Option %v at line 1 isn't a valid time signature", j+1))
					}
				case 1:
					if !strings.ContainsAny(option, "0123456789") && option != "0" {
						errorsFound = append(errorsFound, fmt.Sprintf("Option %v at line 1 isn't a valid BPM mark", j+1))
					}
				case 3:
					if !true {

					}
				}
			}

			fmt.Println("End of line 1 analysis")
		case 1:
			fmt.Println("Analysing line 2...")

			if len(line) > 1 || len(line) < 1 {
				errorsFound = append(errorsFound, "Line 2 must contain the singer's name and no commas (,)")
			} else if line[0] == "" || line[0] == strings.TrimSpace(line[0]) {
				errorsFound = append(errorsFound, "Line 2 lacks singer declaration.")
			}
		case 2:
			/*
				una nota deberia ser un nombre, dos puntos y una duración
				si no hay letras (a-g) da error
				si no hay dos puntos da error
				si no hay números da error
			*/

			if len(line) < 1 {
				continue
			}

			fmt.Println("Analysing line 3...")

			for j, note := range line {
				fmt.Printf("Analysing note %v of %v...\t", j+1, len(line))

				if !strings.Contains(note, ":") {
					errorsFound = append(errorsFound, fmt.Sprintf("Note %v lacks a separator", j+1))
				}

				if !strings.ContainsAny(note, "ABCDEFGRabcdefgr0123456789") {
					if !strings.Contains(note, "R:F") || !strings.Contains(note, "r:f") || !strings.Contains(note, "R:f") || !strings.Contains(note, "r:F") {
						errorsFound = append(errorsFound, fmt.Sprintf("Note %v lacks either note name or length", j+1))
					}
				}

				fmt.Print("Finished\n")
			}

			fmt.Println("End of line 3 analysis")
		}
	}

	// si hay errores formatearlos
	if len(errorsFound) > 0 {
		return fmt.Errorf("%v error(s) found:\n- %v", len(errorsFound), strings.Join(errorsFound, "\n- "))
	}

	return nil
}

func toTicks480(noteLength float64, signature Signature) float64 {
	// to-do
	return 0.0
}

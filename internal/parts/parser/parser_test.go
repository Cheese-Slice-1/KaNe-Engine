package parser

import (
	//"engine/parts"
	"fmt"
	"testing"
)

func TestParser(t *testing.T) {
	file := `4/4, 120, jpn-ro;
Singer Name;
R:F, a:D4:F, a:C4:16-8, a:E4:16-8;`

	// cut is how many speration depths a quarter note (beat) has. 2 -> (1/2)/2
	// 	fileVer2 := `
	// conf {
	// 	bpm: 120,
	// 	time: 4/4,
	// 	depth: 2
	// };

	// utane uta {
	// 	notes: [C4, C4, Cs4, Ds4],
	// 	time: [1, 1, 2, F],
	// 	tune: test.kanet
	// }
	// 	`
	// 1 is one quarter note, which is a beat

	res, err := ParseFile(file)
	if err != nil {
		// panic(err)
		t.Fatal(err)
	}

	fmt.Println("Parsed test file content:")
	fmt.Println(res)
}

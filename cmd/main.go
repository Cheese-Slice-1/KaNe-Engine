package main

import (
	"fmt"
	"os"
	"strings"
	// "engine" // someday in the future lil buddy
)

func main() {
	// optionsHelp := map[string]string{"-g": "Gender formant (range: x-y)"}

	args := os.Args[1:] // get all args EXCEPT program path

	switch args[0] {
	case "-h", "--help", "help", "-?", "?":
		fmt.Println("Usage: kane file.kane") // wow how useful
	default:
		str, found := strings.CutSuffix(args[0], ".kane")
		if len(str) < 1 || !found {
			panic("Error: The given file must have a name and a .kane extension")
			// ^ why would anyone get this
		}
	}

	// also idk what the  ACTUAL FUCK i'm doing w my life here

	fmt.Println(args) // the user doesn't need this but anyway
}

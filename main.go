package main

import (
	"fmt"
	"os"
	"strings"
	// "engine"
)

func main() {
	// optionsHelp := map[string]string{"-g": "Gender formant (range: x-y)"}

	args := os.Args[1:]

	switch args[0] {
	case "-h", "--help", "help", "-?", "?":
		fmt.Println("Usage: kane file.kane")
	default:
		str, found := strings.CutSuffix(args[0], ".kane")
		if len(str) < 1 || !found {
			panic("Error: The given file must have a name and a .kane extension")
		}
	}

	fmt.Println(args)
}

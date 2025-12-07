package engine

import (
	. "fmt"

	// "os"
	"resampler"
	"stitcher"
	"strings"
	//"github.com/go-mix/mix" // NOTE: idk why i have this here
)

func Run(project string, singerLocations []string) error {
	//parse the project file

	parsedProject, err := parser.ParseFile(project)
	if err != nil {
		return error
	}

	singer := parsedProject[1][0]

	loadSinger(singer, singerLocations)

	return nil
}

func loadSinger(name string, locations []string) {
	Println("Loading " + name + " from " + strings.Join(locations, ", ") + "...")

	// maybe i'll change it so that main loads the singer and this decodes it
	// like flac --> decoded flac
}

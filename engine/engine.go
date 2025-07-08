package engine

import (
	"fmt"
	// "os"
	"engine/parts"
	"strings"
)

func Run(project string, options []string, singerLocations []string) error {
	//parse the project file
	parsedProject, err := parts.ParseFile(project)

	if err != nil {
		panic("Project contains an error: " + err.Error())
	}

	singer := parsedProject[1][0]

	loadSinger(singer, singerLocations)

	return nil
}

func loadSinger(name string, locations []string) {
	fmt.Println("Loading " + name + " from " + strings.Join(locations, ", ") + "...")

	// maybe i'll change it so that main loads the singer and this decodes it
	// like flac --> decoded flac
}

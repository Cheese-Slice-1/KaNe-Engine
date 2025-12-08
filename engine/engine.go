package engine

import (
	. "fmt"

	// "os"
	"resampler"
	"stitcher"
	"strings"
	. "utils"
	//"github.com/go-mix/mix" // NOTE: idk why i have this here
)

func Run(project string, singerLocations []string) error {
	// NOTE: singer locations should be in config file

	//parse the project file
	parsedProject, err := parser.ParseFile(project)
	if err != nil {
		return err
	}

	singer := parsedProject[1][0] // TODO: wrong. basic project is more complex

	_ := loadSinger(singer, singerLocations)

	return nil
}

func loadSinger(singer Singer, locations []string) any {
	Println("Loading " + singer.name + " from " + strings.Join(locations, ", ") + "...")

	// maybe i'll change it so that main loads the singer and this decodes it
	// like flac --> decoded flac

	return nil
}

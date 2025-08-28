package engine

import (
	. "fmt"
	// "os"
	"engine/parts"
	"strings"
	// "github.com/go-mix/mix"
	// "github.com/mewkiz/flac"
)

type NoteType int

const (
	HalfNote NoteType = 2
	QuarterNote NoteType = 4
	EighthNote NoteType = 8
)

type Signature struct {
	numerator int
	denominator NoteType
}

func Run(project string, singerLocations []string) error {
	//parse the project file
	
	parsedProject, err := parts.ParseFile(project)

	if err != nil {
		panic("Project contains one or more problems:\n" + err.Error())
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

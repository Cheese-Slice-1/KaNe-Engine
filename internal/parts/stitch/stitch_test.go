package stitch

import (
	//"fmt"
	"os"
	"testing"
)

/*
func TestStitch(t *testing.T) {
	files := []string{
		"C:/Users/loiro/Documents/OpenUtau-win-x64/Singers/uta/あ.flac",
		"C:/Users/loiro/Documents/OpenUtau-win-x64/Singers/uta/か.flac",
		"C:/Users/loiro/Documents/OpenUtau-win-x64/Singers/uta/げ.flac",
	}

	res, err := parts.StitchDemo(files)

	if err != nil {
		t.Fatalf("unable to open files: %v", files)
	}

	os.WriteFile()
}
*/

func TestStitch(t *testing.T) {
	files := []string{
		"C:/Users/loiro/Documents/OpenUtau-win-x64/Singers/uta/あ.flac",
		"C:/Users/loiro/Documents/OpenUtau-win-x64/Singers/uta/か.flac",
		"C:/Users/loiro/Documents/OpenUtau-win-x64/Singers/uta/げ.flac",
	}

	Stitch(files)
}

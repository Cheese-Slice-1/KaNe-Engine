package stitcher

import (
	//"fmt"
	"os"
	"testing"
	. "utils"
)

/*
func TestStitch(t *testing.T) {
	files := []string{
		"~/.kane/singers/uta/あ.flac",
		"~/.kane/singers/uta/か.flac",
		"~/.kane/singers/uta/げ.flac",
	}

	res, err := parts.StitchDemo(files)

	if err != nil {
		t.Fatalf("unable to open files: %v", files)
	}

	os.WriteFile()
}
*/

func TestStitch(t *testing.T) {
	files := []string{ // defoko's samples
		"~/.kane/singers/uta/あ.flac", // a
		"~/.kane/singers/uta/か.flac", // ka
		"~/.kane/singers/uta/げ.flac"} // ge

	samples := GetSamples(files) // get streams

	stitched := Stitch(samples)
	os.WriteFile() // TODO: tf does this do? how do i use it? shit
}

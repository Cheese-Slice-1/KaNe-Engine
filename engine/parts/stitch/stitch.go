package stitcher

import (
	"fmt"
	"log"
	"os"
	. "utils"

	// "github.com/go-mix/mix"
	"github.com/eaburns/flac"
)

func Stitch(streams [][]byte) []byte {
	// TODO: make it care about timing

	// basic ass stitch (does NOT care about timing AT ALL)
	var stitched = Flatten(streams)
	return stitched
}

func StitchPaths(paths []string) []byte {
	streams, err := GetStreams(paths) // get streams from different files
	if err != nil {
		log.Fatal(err)
		return nil
	}

	stitched := Flatten(strems)
}

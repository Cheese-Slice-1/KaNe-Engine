package stitcher

import (
	"fmt"
	"log"
	"os"
	. "utils"

	// "github.com/go-mix/mix"
	"github.com/eaburns/flac"
)

func Stitch(samples [][]byte) []byte {
	// TODO: make it care about timing

	// basic ass stitch (does NOT care about timing AT ALL)
	var stitched = Flatten(samples)
	return stitched
}

func StitchPaths(paths []string) []byte {
	samples, err := GetSamples(paths) // get streams from different files
	if err != nil {
		log.Fatal(err) // WHY			ARE YOU DUMB?
		return nil     // TODO: fix this piece of SHIT and make it handle error
	}

	stitched := Flatten(strems) // wow
}

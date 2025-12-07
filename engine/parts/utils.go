package utils

import (
	"errors"
	"io"
	"os"

	"github.com/eaburns/flac"
)

type Singer struct {
	name    string
	path    string
	samples map[string][]byte // map[filename]audio
	alias   map[string]string // map[alias]filename
}

// get the samples from several files
func GetSamples(paths []string) ([][]byte, error) {
	var result [][]byte

	for _, path := range paths {
		file, err := os.Open(path)
		if err != nil {
			return nil, err
		}

		content, _, err := flac.Decode(file)
		if err != nil {
			return nil, err
		}

		result = append(result, content)
	}

	return result, nil
}

func Flatten(arrays [][]any) []any {
	var result []any
	for _, array := range arrays {
		result = append(result, array...)
	}
	return result
}

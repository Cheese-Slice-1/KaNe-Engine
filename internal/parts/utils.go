package utils

import (
	"errors"
	"io"
	"os"

	"github.com/eaburns/flac"
)

// get the samples from several files
func GetStreams(paths []string) ([][]byte, error) {
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

package stitch

import (
	"fmt"
	"os"
	// "github.com/go-mix/mix"
	// "github.com/mewkiz/flac"
	"github.com/eaburns/flac"
)

//func Stitch(paths []string) []byte {
//	// TODO
//	fmt.Println(paths)
//
//	return nil
//}

func Stitch(paths []string) {
	var decodedFiles []byte

	for _, path := range paths {
		file, err := os.Open(path)
		if err != nil {
			fmt.Println("Error encountered: ", err)
			return
		}

		decoded, _, err := flac.Decode(file)
		decodedFiles = append(decodedFiles, decoded...)
	}
}

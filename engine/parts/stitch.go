package parts

import (
	// "github.com/go-mix/mix"
	"github.com/mewkiz/flac"
)

func Stitch(args []any) (any, error) {
	// TODO
	return nil, nil
}

func StitchDemo(paths []string) ([]int32, error) {
	var streams []*flac.Stream
	var audios [][]int32
	var out []int32

	for _, path := range paths {
		stream, err := flac.ParseFile(path)

		if err != nil {
			return nil, err
		}

		streams = append(streams, stream)
	}

	for _, stream := range streams {
		samples, err := getSamples(stream)

		if err != nil {
			return nil, err
		}

		audios = append(audios, samples)
	}

	for _, audio := range audios {
		out = append(out, audio...)
	}

	return out, nil

}

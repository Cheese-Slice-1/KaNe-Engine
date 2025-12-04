package parts

import (
	"io"
	"errors"
	"github.com/mewkiz/flac"
)

func getSamples(stream *flac.Stream) ([]int32, error) {
	var out []int32

	for {
		frame, err := stream.ParseNext()

		if err != nil {
			if err == io.EOF {
				break
			}
			return nil, errors.New("unable to parse audio frame from FLAC stream")
		}

		for _, subFrame := range frame.Subframes {
			out = append(out, subFrame.Samples...)
		}
	}

	return out, nil
}

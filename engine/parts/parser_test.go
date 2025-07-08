package parts_test

import (
	"engine/parts"
	"fmt"
	"testing"
)

func TestParser(t *testing.T) {
	file := `4/4, 120, jpn-ro;
Singer Name;
R:F, a:D4:F, a:C4:16-8, a:E4:16-8;`

	res, err := parts.ParseFile(file)
	if err != nil {
		panic(err)
	}

	fmt.Println("Parsed test file content:")
	fmt.Println(res)
}

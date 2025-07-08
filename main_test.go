package main_test

import (
	"fmt"
	"os"
	"engine/parts"
)

func TestMain(m *testing.M) {
	// Setup code if needed
	exitCode := m.Run()
	// Teardown code if needed
	os.Exit(exitCode)
}

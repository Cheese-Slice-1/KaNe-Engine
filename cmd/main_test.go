package main

import (
	"testing"
)

// WHAT THE FUCK DO I DO WITH THIS SHIT ;;
func TestEngine(m *testing.M) {
	// Setup code if needed
	exitCode := m.Run()
	// Teardown code if needed
	os.Exit(exitCode)
}

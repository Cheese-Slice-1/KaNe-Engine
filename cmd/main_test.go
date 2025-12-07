package main

import (
	"testing"
)

func TestEngine(m *testing.M) {
	// Setup code if needed
	exitCode := m.Run()
	// Teardown code if needed
	os.Exit(exitCode)
}

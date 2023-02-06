package main

import "fmt"

const (
	_  = iota //ignore first value by assigning to blank identifier
	KB = 1 << (10 * iota)
	MB
	GB
	TB
)

func main() {
	filesize := 4000000000.
	fmt.Printf("%.2fMB, %.2fGB", filesize/MB, filesize/GB)
}

package main

import "fmt"

func main() {
	func() {
		fmt.Println("Helloooo")
	}()

	f := func() {
		fmt.Println("ello")
	}
	f()
}

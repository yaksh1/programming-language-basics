package main

import "fmt"

func main() {
	r := 'y'
	fmt.Printf("%v %T\n", r, r)

	var R rune = 't'
	fmt.Printf("%v %T\n", R, R) // rune datatype is integer 32
}

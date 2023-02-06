package main

import "fmt"

func main() {
	var a int = 10
	var b *int = &a    //pointing to address of a
	fmt.Println(a, *b) // dereferencing b
	a = 18
	fmt.Println(a, *b)
	*b = 100
	fmt.Println(a, *b)
}

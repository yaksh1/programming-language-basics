package main

import "fmt"

func main() {
	a := []int{1}
	b := append(a, []int{2, 3, 4}...)
	fmt.Printf("b: %d\n", b)
	fmt.Printf("a: %d\n", a)

}

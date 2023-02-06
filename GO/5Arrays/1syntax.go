package main

import "fmt"

func main() {
	num := [...]int{1, 2, 3} // use ... instead of array size
	fmt.Printf("num: %d\n", num)

	var a [3]int //0 by default
	fmt.Printf("a: %d\n", a)
	a[0] = 100
	fmt.Printf("a: %d\n", a)

	//! Array and slice
	var a1 = [...]int{1, 2, 3} //array
	var a2 = []int{4, 5, 6} //slice (eliminating ... three dots)
	fmt.Printf("a1: %d, a2: %d", a1, a2)
}

package main

import "fmt"

func main() {

	//! Array and slice
	var a1 = [...]int{1, 2, 3}
	var a2 = []int{4, 5, 6}

	// array gets copied and original remains the same
	b1 := a1
	b1[1] = 100
	fmt.Printf("a1: %d, b1: %d\n", a1, b1)

	//slice gets call by reference and original changes
	b2 := a2
	b2[1] = 100
	fmt.Printf("a2: %d, b2: %d", a2, b2)

}

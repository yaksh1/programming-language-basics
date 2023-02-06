package main

import "fmt"

func main() {
	b := []int{}
	fmt.Printf("capacity: %d\n", cap(b))

	b = append(b, 1)
	fmt.Println(b)
	fmt.Printf("length: %d\n", len(b))
	fmt.Printf("capacity: %d\n", cap(b))

	b = append(b, 2, 3, 4, 5)
	fmt.Println(b)
	fmt.Printf("length: %d\n", len(b))
	fmt.Printf("capacity: %d\n", cap(b))
}

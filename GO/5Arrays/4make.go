package main

import "fmt"

func main() {
	a := make([]int, 3, 100) //make(datatype,length,capacity)
	fmt.Println(a)
	fmt.Printf("length: %d\n", len(a))
	fmt.Printf("capacity: %d\n", cap(a))
}

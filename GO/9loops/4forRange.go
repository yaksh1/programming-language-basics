package main

import "fmt"

func main() {
	s := []int{3, 4, 56, 7}

	//syntax to use range keyword
	for key, value := range s {
		fmt.Println("key: ", key, "value: ", value)
	}

	//this works for all arrays slice maps strings
}

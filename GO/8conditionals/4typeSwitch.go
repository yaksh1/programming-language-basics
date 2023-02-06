package main

import "fmt"

func main() {
	
	var i interface{} = "3"

	switch i.(type) {
	case int:
		fmt.Println("i is an integer")
	case float64:
		fmt.Println("i is a float64")
	case string:
		fmt.Println("i is a string")
	default:
		fmt.Println("i is another type")
	}
}

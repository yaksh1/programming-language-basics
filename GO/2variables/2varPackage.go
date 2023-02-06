package main

import "fmt"

var (
	firstName string = "yaksh" // we can declare variables in a block
	lastName  string = "Gandhi"
	number    int    = 6354955542
)

func main() {
	fmt.Printf("%v %v\n", firstName, lastName)
	fmt.Printf("%v", number)
}

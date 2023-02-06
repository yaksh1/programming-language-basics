package main

import "fmt"

type Student struct {
	name string
	roll int
	subs []string
}

func main() {
	//------------------------------------------------------------------------------
	// Structs are passed by value so original does not changes if other is changed
	//------------------------------------------------------------------------------
	s1 := Student{
		name: "yaksh",
		roll: 34,
		subs: []string{
			"fds",
			"sepm",
			"os",
			"cn",
		},
	}

	fmt.Println(s1)                  // print whole struct
	fmt.Println(s1.name, s1.subs[1]) //print particular value

	//method 2
	s2 := struct{ name string }{name: "rahul"}
	fmt.Println(s2)
}

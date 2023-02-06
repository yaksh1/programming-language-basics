package main

import "fmt"

func main() {
	g := greeter{
		greeting: "hello",
		name:     "GO",
	}
	g.greet()
}

type greeter struct {
	greeting, name string
}

func (g greeter) greet() { //copies the struct
	fmt.Println(g.greeting, g.name)
}

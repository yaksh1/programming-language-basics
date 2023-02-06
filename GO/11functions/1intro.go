package main

import "fmt"

func main() {
	msg := "hello this is a func call"
	name := "yaksh"
	print(msg, &name)
	fmt.Println(name)
}

func print(msg string, name *string) {
	fmt.Println(msg)
	fmt.Println(*name)
	//changing the name
	*name = "rahul"
	fmt.Println(*name)

}

package main

import "fmt"

type Student struct {
	name string
	roll int
}

type IQ struct {
	Student //calling the student struct
	isSmart bool
}

func main() {
	s1 := IQ{}
	s1.name = "yaksh"
	s1.roll = 51
	s1.isSmart = false

	fmt.Println(s1)
}

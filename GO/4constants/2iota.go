package main

import "fmt"

// const a int = 1 //? package level declaration
const (
	a = iota //(0) // can act as counter that starts with 0
	b = iota //(1)
	c = iota //(2)
)

const ( //go can recognize the pattern
	d = iota //0
	e        //1
	f        //2
)

func main() {
	//first block
	fmt.Printf("%v\n", a)
	fmt.Printf("%v\n", b)
	fmt.Printf("%v\n", c)

	//second block
	fmt.Printf("%v\n", d) //will start again from 0 because different block
	fmt.Printf("%v\n", e)
	fmt.Printf("%v\n", f)
}

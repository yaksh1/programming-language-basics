package main

import "fmt"

func main() {
	// syntax
	const myConst int = 1
	fmt.Printf("%v, %T\n", myConst, myConst)

	//operations on const
	const a int = 1
	var b int16 = 2
	// fmt.Printf("%v, %T\n", a+b, a+b) //! will give error int + int16

	const c = 3
	fmt.Printf("%v, %T\n", b+c, b+c) // implicit conversion
}

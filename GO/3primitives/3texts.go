package main

import "fmt"

func main() {
	//string
	s := "this is a string"
	fmt.Printf("%v, %T\n", s, s)

	//using slice
	fmt.Printf("%v, %T\n", s[1], s[1])         //! 104, unit8 (returning in ascii encoding)
	fmt.Printf("%v, %T\n", string(s[1]), s[1]) //! h,unit8

	//!YOU CANT DO THIS
	// s[2] = "u" // cant manipulate string

	//joining the strings
	s1 := "string 1 +"
	s2 := " string 2"
	fmt.Println(s1 + s2)

	//converting into collection of bytes
	b := []byte(s1)
	fmt.Printf("%v, %T\n", b, b) //!giving the array of the ascii values

}

package main

import "fmt"

func main() {
	//signed int
	var a int = 10
	fmt.Printf("signed integers: %v,%T\n", a, a)

	// unsigned int
	var b uint16 = 31
	fmt.Printf("unsigned integers: %v,%T\n", b, b)

	//bitwise operators
	c := 2              // 10
	d := 3              //11
	fmt.Println(c & d)  // 10
	fmt.Println(c | d)  // 11
	fmt.Println(c ^ d)  // 01
	fmt.Println(c &^ d) // 00

	e := 9              //2^2
	fmt.Println(e << 3) // 2^2 * 2^3 = 2^5 =32
	fmt.Println(e >> 3) // 2^2/2^3 = .5 = 0

	// complex numbers
	var f complex64 = 3 + 4i  // or  	 complex(3,4)
	fmt.Printf("complex number: %v,%T\n", f, f)

	fmt.Printf("real part: %v,%T\n", real(f), real(f))
	fmt.Printf("imaginary part: %v,%T\n", imag(f), imag(f))
}

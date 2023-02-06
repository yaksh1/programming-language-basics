package main

import (
	"fmt"
	"strconv"
)

func main() {
	i := 8
	j := 9.             // float
	k := float64(i) + j //conversion
	fmt.Println(k)

	var a string
	b := 10
	a = strconv.Itoa(b) //convert integer to string
	fmt.Printf("%v,%T", a, a)

}

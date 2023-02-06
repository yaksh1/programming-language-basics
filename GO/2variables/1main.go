package main

import "fmt"

func main() {
	//first method
	var i int
	i = 23
	fmt.Println(i)

	//second method
	var j float64 = 49
	fmt.Println(j)

	//Third method
	k := "hello"
	fmt.Println(k)

	fmt.Printf("%v %T", j, j) // value of j and datatype of j
}

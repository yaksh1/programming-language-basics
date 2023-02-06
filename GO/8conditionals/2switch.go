package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	switch n {
	case 1, 3, 5:
		fmt.Print("odd")
	case 2, 4, 6:
		fmt.Print("even")
	default:
		fmt.Print("enter less than 6")
	}
}

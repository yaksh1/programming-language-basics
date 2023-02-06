package main

import "fmt"

func main() {

	i := 1
	var name string
	for {

		//scan name
		fmt.Print("enter name: ")
		fmt.Scan(&name)
		//condition
		fmt.Print("1 to continue 0 to exit: ")
		fmt.Scan(&i)
		//break
		if i == 0 {
			break
		}
	}
}

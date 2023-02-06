package main

import "fmt"

func main() {

	//we can initialize during if and switch statement
	if i := 5; i == 5 {
		fmt.Print(true)
	} else {
		fmt.Print(false)
	}

	fmt.Println()
	
	switch i := 5; i {
	case i:
		fmt.Print(i)
	}
}

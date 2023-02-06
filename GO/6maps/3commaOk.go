package main

import "fmt"

func main() {
	rollNo := map[string]int{
		"yaksh":  1,
		"rahul":  2,
		"bhakti": 3,
	}

	//printing a key which is not present returns 0 (cant know if the value is zero or key is not present)
	fmt.Println(rollNo["raghav"])

	//to over come this use comma okay syntax
	pop, ok := rollNo["raghav"]
	fmt.Println("value: ", pop, ",isPresent: ", ok)

	_, ok = rollNo["raghav"] //to only print false or true
	fmt.Println("isPresent: ", ok)

	_, ok = rollNo["rahul"]
	fmt.Println("isPresent: ", ok)

}

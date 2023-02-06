package main

import "fmt"

func main() {
	rollNo := map[string]int{
		"yaksh":  1,
		"rahul":  2,
		"bhakti": 3,
	}
	//add element
	rollNo["shubham"] = 4
	fmt.Printf("%v\n", rollNo) //ordering of the map varies

	//delete
	delete(rollNo, "shubham")
	fmt.Println(rollNo)

	//length of the map
	fmt.Println(len(rollNo))

}

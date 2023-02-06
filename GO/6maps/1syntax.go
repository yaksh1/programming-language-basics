package main

import "fmt"

func main() {
	//-----------------------------------------------------------------
	//maps are passed by ref so original changes if other is changed
	//-----------------------------------------------------------------

	//Method 1
	rollNo := map[string]int{
		"yaksh":  1,
		"rahul":  2,
		"bhakti": 3,
	}

	fmt.Printf("%v, %T\n", rollNo, rollNo)

	//Method 2
	id := make(map[string]int)
	id = map[string]int{
		"1": 1,
		"2": 2,
		"3": 3,
	}
	fmt.Println(id)

}

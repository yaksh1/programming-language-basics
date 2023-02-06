package main

import "fmt"

func main() {
	var students [4]string
	fmt.Printf("students: %v\n", students) // empty array
	students[0] = "lisa"
	students[1] = "yaksh"
	students[2] = "shlok"
	students[3] = "shubham"
	fmt.Printf("students: %v\n", students)

	//printing length of array
	fmt.Printf("NUmber of students: %v\n", len(students))
}

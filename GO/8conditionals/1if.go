package main

import "fmt"

func main() {
	var number, guess int

	fmt.Print("number: ")
	fmt.Scan(&number)
	fmt.Print("guess: ")
	fmt.Scan(&guess)

	for number != guess {
		if guess < 1 || guess > 100 {
			fmt.Println("guess between 1 and 100")
		} else if guess < number {
			fmt.Print("guess higher: ")
		} else if guess > number {
			fmt.Print("guess lower: ")
		}
		//take input again
		fmt.Scan(&guess)

		if guess == number {
			fmt.Print("correct")
		}
	}
}

package main

import "fmt"

func main() {
Loop: //this keyword helps to break out of the outer loop directly
	for i := 1; i <= 3; i++ {
	Loop2:
		for j := 1; j <= 3; j++ {
			fmt.Println(i * j)
			if i*j >= 3 {
				break Loop
			}
			if i*j >= 2 {
				break Loop2
			}
		}
	}
}

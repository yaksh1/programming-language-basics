package main

import (
	"fmt"
	"time"
)

func main() {
	msg := "hello"
	// go func() {
	// 	fmt.Println(msg)
	// }()
	// msg = "goodbye" this will print goodbye cause goroutine will assign the new value of msg
	go func(msg string) {
		fmt.Println(msg)
	}(msg)
	msg = "goodbye" //this will print hello as parameter is passed in the func
	time.Sleep(100 * time.Millisecond)

}

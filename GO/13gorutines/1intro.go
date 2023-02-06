package main

import (
	"fmt"
	"time"
)

func main() {
	go print() //creates a virtual thread
	//delays the end of main function so that goroutine can execute the message
	time.Sleep(100 * time.Millisecond) 
}

func print() {
	fmt.Println("hello")
}

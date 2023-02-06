// It is not best practice to use sleep cause it brings down the performance
// so we can use weigh group instead

package main

import (
	"fmt"
	"sync"
)

var wg = sync.WaitGroup{}

func main() {
	for i := 0; i < 5; i++ {
		wg.Add(1)
		go print() //creates a virtual thread
	}
	//delays the end of main function so that goroutine can execute the message
	wg.Wait()
}

func print() {
	// time.Sleep(5 * time.Second)
	fmt.Println("hello")
	wg.Done()
}

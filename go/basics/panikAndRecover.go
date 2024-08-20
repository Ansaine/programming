package main

import (
	"fmt"
)

func start() {
	fmt.Println("Starting the program...")
	callFunction()
	fmt.Println("Program ended gracefully.")
}

func callFunction() {

	fmt.Println("About to panic...")
	panic("Something went wrong!")
	fmt.Println("This line will not be executed.")

	defer func() {
		if r := recover(); r != nil {
			fmt.Println("Recovered from panic:", r)
		}
	}()
}

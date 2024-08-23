package main

import fmt "fmt"

func sum(arr []int) int {
	ans := 0
	for i := 0; i < len(arr); i++ {
		ans += arr[i]
		fmt.Println(arr[i])
	}
	return ans
}

var array []int = []int{1, 2, 2, 5, 3, 4, 5}

var x = sum(array)

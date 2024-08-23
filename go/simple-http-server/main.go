package main

import (
	"fmt"
	"net/http"
)

func main() {
	http.HandleFunc("/main", mainHandler)

	fmt.Println("Server is connecting on port 8080")
	http.ListenAndServe(":8080", nil)

}

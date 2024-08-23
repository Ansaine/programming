# Running go code

go run `<main.go>`

// if we want to build an executable

go build `<main.go` - this will compile and make an executable file named main with no extension
./main	in terminal will run the compiled file

# Errors

Say i declare a function whose return type is error. In case we dont get any error , we can return 'nil'. 'nil'
works with return type error.

# Functions

// Member function vs standalone function

type Person struct {
  Name string
  Age  int
}

// Define a method on the Person struct
func (p Person) Greet() {
  fmt.Printf("Hello, my name is %s and I am %d years old.\n", p.Name, p.Age)
}

here, function greet is made as a member function of the struct Person.

// Standalone function that takes a Person as a parameter
func greet(p Person) {
  fmt.Printf("Hello, my name is %s and I am %d years old.\n", p.Name, p.Age)
}

here, the `greet` function defined as a standalone function takes a `Person` parameter but is not bound to the `Person` type. It is called with `greet(person)` and can be used independently of the `Person` type.

# Concurrency

###### Go Channels

Read operation from an channel is blocked till is value is set.

Go select -

```go
  // selects and executes a channel
  select {
    case firstChannel := <-number:
      fmt.Println("Channel Data:", firstChannel)

    case secondChannel := <-message:
      fmt.Println("Channel Data:", secondChannel)

    // default case 
    default:
      fmt.Println("Wait!! Channels are not ready for execution")
  }
```

Here, say the 3 channels are not initialised. The moment a channel will be initialised, select will execute that case and rest are not executed.
In case default statement is executed, rest will not execute anymore. Only one case is executed using 'select'

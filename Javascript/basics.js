
// Maps in javascript - stores key-value pairs in-memory like redis

// Create a new Map
const myMap = new Map();

// Set key-value pairs
myMap.set('key1', 'value1');
myMap.set('key2', 'value2');

// Get a value by key
console.log(myMap.get('key1')); // Output: value1

// Check if a key exists
console.log(myMap.has('key2')); // Output: true

// Delete a key-value pair
myMap.delete('key1');

// Check the size of the Map
console.log(myMap.size); // Output: 1

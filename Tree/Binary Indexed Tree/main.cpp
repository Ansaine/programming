// Use case of Binary Index Tree - 
// 1. array is given of max length n = 10^5. We either update an element or find sum of range given.

// We need to know a small bit manipulation trick first.(See Luv Video first)
// Given x, -x is 2's complement of x.
// i.e -x= x'+1, where x' is 1's complement of x.
// So, (x&-x) gives the rightmost set bit of x.
// Now, if we do, x= x - x&(-x), rightmost set bit of x is made zero.


// i is an index
// j is i after removing its last set bit. hence, j is always less than i. 
// bit[i] is the sum of elements from j+1 to i

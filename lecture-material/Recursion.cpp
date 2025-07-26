/*
            Recursion
    
    Recursion is a programming technique where a function calls itself to solve a problem.
    It is often used to solve problems that can be broken down into smaller, similar subproblems.
    A recursive function typically has two main components:
     1. Base Case: A condition that stops the recursion when a certain condition is met.
     2. Recursive Case: The part of the function that calls itself with modified arguments.
    Recursion can be a powerful tool, but it is important to ensure that the base case is reached to avoid infinite recursion.

*/

#include <iostream>


// Factorial Example
//  - In case you don't know, the factorial of a number n (denoted as n!) is the product of all positive integers from 1 to n.
//  - For example, 5! = 5 * 4 * 3 * 2 * 1 = 120

int factorial(int n) {
    // Base Case
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive Case
    return n * factorial(n - 1);
}
// Here, the function `factorial` calls itself with a decremented value of `n` until it reaches the base case (when n is 0 or 1).


// Fibonacci Example
//  - The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting 
//    with 0 and 1.

int fibonacci(int n) {
    // Base Cases
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive Case
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// Here, the function `fibonacci` calls itself twice with decremented values of `n` until it reaches the base cases 
// (when n is 0 or 1).


// Evaluating a Recursive Function by Hand
// Let's evaluate the factorial function for n = 5 by hand.
// A common technique is to write out the recursive calls step by step:
/*
    factorial(5)
    = 5 * factorial(4)
    = 5 * (4 * factorial(3))
    = 5 * (4 * (3 * factorial(2)))
    = 5 * (4 * (3 * (2 * factorial(1))))
    = 5 * (4 * (3 * (2 * 1)))
    = 5 * (4 * (3 * 2))
    = 5 * (4 * 6)
    = 5 * 24
    = 120
*/

// Evaluating a Recursize Function with multiple Recursive Calls
// Let's evaluate the Fibonacci function for n = 5 by hand.
/*
    fibonacci(5)
    = fibonacci(4) + fibonacci(3)

    // Let's evaluate fibonacci(4) first

    = (fibonacci(3) + fibonacci(2)) + fibonacci(3)
    = ((fibonacci(2) + fibonacci(1)) + (fibonacci(1) + fibonacci(0))) + fibonacci(3)
    = (((fibonacci(1) + fibonacci(0)) + 1) + 1 + 0) + fibonacci(3)
    = (((1 + 0) + 1) + 1 + 0) + fibonacci(3)
    = 3 + fibonacci(3)

    // Before we evaluate fibonacci(3), let's look back at what we've found so far
    // We found that:
    //  fibonacci(4) = 3
    //  fibonacci(3) = 2
    //  fibonacci(2) = 1
    // We can see that, when evaluating fibonacci(4), we also found fibonacci(3).
    // This means we don't have to go through the process of evaluating fibonacci(3) again.
    // We can now conclude:
    
    fibonacci(5)
    = 3 + 2
    = 5
*/

int main() {
    
    // Calling the factorial function
    int fac = factorial(5);
    std::cout << "Factorial of 5 is: " << fac << std::endl; // Output: Factorial of 5 is: 120

    return 0;
}
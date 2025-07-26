/*
            Lambda Functions
    
    Lambda functions are a way to define anonymous functions in C++. They can capture variables from their surrounding 
    scope and can be used for short-lived operations. You can think of them as a way to create small, inline functions without 
    needing to define a separate function elsewhere in your code.

    Syntax:
    [capture](parameters) -> return_type {
        // function body
    }

    The capture clause allows you to specify which variables from the surrounding scope you want to use inside the lambda function.
    The parameters are similar to regular function parameters, and the return type can be specified explicitly or inferred by the 
    compiler.


    Alternative Syntax:
    [capture](parameters){
        // function body
    }

    This syntax is used when the return type can be inferred by the compiler, which is often the case for simple lambdas.
*/

#include <iostream>

// Example of Passing a Lambda Function to a Function

#include <functional> // <-- Needed for std::function

void message(std::function<void(std::string)> lambda) {
    std::cout << "This is the beginning of a message." << std::endl;
    lambda("Carlos");
    std::cout << "This is the end of a message." << std::endl;
}
// When passing in a function, we can use the std::function type to specify that we are passing a function that takes a 
// string and returns void.



int main() {

    // Example of a Lambda Function

    auto greet = [](std::string name){
        std::cout << "Hello, " << name << "!" << std::endl;
    };

    greet("Avery"); // Output: Hello, Avery!
    // This is the equivalent of defining a function like so:
    /*
        void greet(std::string name) {
            std::cout << "Hello, " << name << "!" << std::endl;
        }
    */
    // The "auto" keyword allows the compiler to deduce the type of the lambda function, making it flexible and easy to use.

    // Lambda Functions with Capture
    const double PI = 3.14159;
    auto calculateCircleArea = [PI](double radius) {
        return PI * radius * radius;
    };

    double area = calculateCircleArea(5.0);
    std::cout << "Area of the circle: " << area << std::endl; // Output: Area of the circle: 78.53975


    // Alternative Syntax Example
    auto add = [](int a, int b) -> int {
        return a + b;
    };
    // This works the same way as the previous lambda function, but explicitly specifies the return type as int.
    // This is useful when the return type cannot be easily inferred by the compiler.

    return 0;
}
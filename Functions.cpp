/*
            Functions

    When programming, we'll often find that we want to use some code in mutliple places throughout our program. This
    can take up a lot of space, especially for large and complicated programs. Instead, we can put that code into what's
    known as a function, and when we want to use that code, we can just call the function.

    Format:

    (Data Type) (Function Name) (Optional Parameters) {
        // Some Code
    }

    As an example, we have the main function:

    int main() {
    
        // do something

        return 0;
    }

    When we start our program, the main function is called to begin the program. It returns an integer, as indicated by the
    int.

*/

// Here's some example for basic math operations

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}


// ################### Parameters ###################

// Parameters act as a way for us to pass in information to be used in a function. We can have as many as we want,
// or none at all. We define the parameters by the variable type followed by the variable name. 

// Default Parameters
//  - Sometimes we may not need to give a value to a parameter all the time. However, leaving a parameter without a value
//    will result in an error. To fix this, we can create a default value for the parameter.

// Here's an example:
int some_function(int a, int b = 4) {
    // do something
    return 0;
}
// Here, we assume the parameter b may not be given a value, so we set its default value to 4. If no value is entered for
// b, b will have the value of 4. If a value is entered for b, b will have whatever value was entered.


// ################### Return Types ###################

// The data type we wrtie before the function name determine what type of value we return. If we wrote int, the function
// must return an integer. This applies for all data types in C++. Additionally, there's the void return type, which allows
// us to have a function that returns nothing.

// Here's an example:
void print_birthday_song(std::string name) {
    std::cout << "Happy Birthday to You!" << std::endl;
    std::cout << "Happy Birthday to You!" << std::endl;
    std::cout << "Happy Birthday to " << name << "!" << std::endl;
    std::cout << "Happy Birthday to You!" << std::endl;
}
// In this example, nothing is returned since we don't use the return keyword

#include <iostream>

int main() {

    // Here's how we'd call the functions in our main function and assign then to variables:

    int sum = add(1, 2); // returns 3
    int difference = subtract(4, 3); // returns 1
    int product = multiply(2, 6); // returns 12
    int quotient = divide(8, 4); // returns 2

    // What's going on here is that the values we put in the parenthesis are then assigned to the variables a and b,
    // in the order they were assigned. The calculation is then performed and the return keyword ends the function and
    // returns the result of the operation.

    // Return Statement
    //  - The return statement is a way for us to have a function call be equal to some value. For instance, calling
    //    add(1, 2); returned 1 + 2 = 3, so add(1, 2) became 3, which was then assigned to our sum variable. Whenever
    //    you call the return keyword, the program in the function will end.

    return 0;
}
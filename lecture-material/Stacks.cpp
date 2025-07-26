/*
            Stacks
    
    A stack is a data structure that follows the Last In First Out (LIFO) principle. This means that the last element 
    added to the stack is the first one to be removed. You can think of it like a stack of plates where, if you want to
    add or remove a plate, you can only do so from the top of the stack.
    Stacks are commonly used in scenarios where you need to keep track of function calls, undo operations, or parsing
    expressions.

    Format:

    std::stack<DataType> stackName;

    // Note: You cannot initialize a stack with values like you can with vectors.
*/

#include <iostream>
#include <stack> // <-- Needed to use stacks

int main() {

    // Example Stack
    std::stack<int> numbers;

    // Adding elements to the stack
    //  - To add elements to a stack, we use the push() function.
    numbers.push(14);
    numbers.push(3);
    numbers.push(27);

    // Removing elements from the stack
    //  - To remove elements from a stack, we use the pop() function.
    //  - This will remove the last element added to the stack.
    numbers.pop(); // Removes 27

    // Accessing the top element of the stack
    //  - To access the top element of the stack, we use the top() function
    int topNumber = numbers.top(); // Gets the top element (3)

    //  - If we desire, we can also change the top element of the stack like so:
    numbers.top() = 5;

    // Getting the size of the stack
    //  - To get the number of elements in the stack, we use the size()
    int size = numbers.size();

    // Checking if the stack is empty
    //  - To check if the stack is empty, we use the empty() function
    bool isEmpty = numbers.empty(); // Returns false since the stack has elements

    return 0;
}
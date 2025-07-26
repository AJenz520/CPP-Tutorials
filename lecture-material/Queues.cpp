/*
            Queues

    A queue is a data structure that follows the First In First Out (FIFO) principle. This means that the first element 
    added to the queue will be the first one to be removed. You can think of it like a line of people waiting for a service, 
    where the person at the front of the line is served first. Queues are commonly used in scenarios where tasks need to be 
    processed in the order they arrive, such as print jobs, task scheduling, and event handling.

    Format:

    std::queue<DataType> queueName;

    // Note: You cannot initialize a queue with values directly like you can with vectors.
*/

#include <iostream>
#include <queue> // <-- Needed to use queues

int main() {

    // Example Queue
    std::queue<int> numbers;

    // Adding elements to the queue
    //  - To add elements to a queue, we use the push() method.
    numbers.push(17);
    numbers.push(52);
    numbers.push(28);

    // Accessing elements in the queue
    //  - To access the first or back element of a queue, we use the front() or back() method, respectively.
    int firstNumber = numbers.front();
    int lastNumber = numbers.back();

    //  - Additionally, we can change the first and last elements using the front() and back() methods.
    numbers.front() = 6; // Change the first element to 6
    numbers.back() = 72;  // Change the last element to 72

    // Removing elements from the queue
    // - To remove elements from the front of the queue, we use the pop() method.
    numbers.pop(); // Removes the first element (17)

    // Checking if the queue is empty
    // - To check if a queue is empty, we use the empty() method.
    bool isEmpty = numbers.empty();

    // Getting the size of the queue
    // - To get the number of elements in the queue, we use the size() method
    int size = numbers.size();

    return 0;
}
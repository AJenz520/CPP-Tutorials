/*
            For, While, and For-Each Loops

    When programming, we often want to repeat some bit of code. This could be something like outputing some message
    multiple times. Other times, we may need to continuely execute some code without knowing how many times to do it.
    This is a common feature in video games, where the program has to continuely check if the player has completed 
    some task before moving on to the next bit of code. Repeatedly executing code can be done easily with loops.

    There are three main types: for, while, and for-each. The for loop is useful when you want to repeat some code for
    a certain amount of time. A while loop is best for when you want to wait for some condition to be met. Lastly, a
    for-each loop is a simplified version of a for loop that's convenient when traversing through data structures like
    arrays and vectors.

*/
#include <iostream>

int main() {

    // ################### For Loop ###################

    /*
        Format:
        for (Initialization; Condition; Update) {
            // do something
        }
    */
    // Example:
    for (int i = 0; i < 10; i++) {
        std::cout << "Hello" << std::endl;
    }
    // This code creates an integer named i and sets it equal to 0. It then checks if i is less than 10. If it is,
    // the message "Hello" will be outputted. After the code executes, i is incremented by 1. It then checks if i
    // is less than 10 again. This cycle continues until i is not less than 10. Once that happens, the program will
    // the for loop and continue on. The output from this for loop is "Hello" repeated 10 times.


    // ################### While Loop ###################

    /*
        Format:
        while (Condition) {
            // do something
        }
    */
    // Example:

    // Verify username
    std::string username;
    std::cout << "Enter your username: ";
    std::cin >> username;

    while (username != "Your Name") {
        std::cout << "Enter your username: ";
        std::cin >> username;
    }
    // In this example, the user will be prompted to enter their username until they enter it correcty. The while
    // loop checks if the username is correct and executed the code until the username is correct.

    //      Do While Loop
    // There's another version of the while loop called the do while loop. It's similar to the while loop except
    // that the code in the loop will always execute at least once.
    // Example:

    // We can simplify our previous example like so
    do {
        std::cout << "Enter your username: ";
        std::cin >> username;
    } while (username != "Your Name");
    // In this case, the code will be executed and then we check the condition. Once the code is executed the first
    // time, the loop will act like a regular while loop and continue asking for our username until it's inputted 
    // correctly.


    // ################### For-Each Loop ###################

    /*
        Format:
        for ((Data Type) (variable name) : (Data Structure)) {
            // do something
        }
    */
    // Example:
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int n : numbers) {
        std::cout << n << std::endl;
    }
    // In this example, we iterate through the numbers array and output each integer. On the left of the colon (:)
    // We define the variable that takes the value of each element in the array. In this case, we defined an integer
    // named n to have the values of 1, 2, ..., 9, 10. On the right, we chose the numbers array to itterate through.
    // Think of it as starting with the first element in the numbers array, setting n equal to its value, executing
    // the code in the loop (outputting it), setting n equal to the value of the next element, and repeating this 
    // process for every element in the array.


    // ################### Break and Continue Statements ###################

    // Continue Statement:
    //  - Sometimes when we're going through a loop we may want to skip executing some code during some iteration. For
    //    instance, if we have a for loop that executes some code 50 times, we may decide that we don't want to run the
    //    13th iteration, since 13 is an unlucky number.
    //  - Here's how we could do this:

    for (int i = 0; i < 50; i++) {
        if (i == 13) {
            continue;  // <-- Once we reach here, we skip all the code after it and go back up to the beginning.
        }
        // do something
    }

    // Break Statment:
    //  - Sometimes we may want to exit out of a loop once we reach some iteration. Maybe we have a while loop that
    //    verifies a user's password. For security purposes, if the user enters the password incorrectly 5 times, we
    //    want to exit the loop.
    //  - Here's how this can be done:

    std::string password = "Some Password";
    std::string entered_password;
    int number_of_guesses = 0;

    do
    {
        std::cout << "Enter your password: ";
        std::cin >> entered_password;
        number_of_guesses++;
        if (number_of_guesses == 5) {
            break;  // <-- Exits the loop
        }
    } while (entered_password != password);
    
    

    return 0;
}
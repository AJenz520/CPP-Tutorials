/*
            Variables and Data Types

    Variables are a way for us to store information in our code to be used later. Think of it like a math problem
    where you have to solve for X. X is the variable containing some value.

    Variables can be made for different data types. Data types are the different types of information we can store.
    The most common ones you'll see are the integer (int), double, character (char), boolean (bool), and string.

*/
#include <iostream>
int main() {

    // Declaring a Variable

    // (Data Type) (Variable Name);  <-- No initial Value
    // or
    // (Data Type) (Variable Name) = (Value);  <-- Inintial Value

    // Example (No Initial Value)
    int number_1;

    // Example (Initial Value)
    int number_2 = 10;




    // Data Types Examples

    // Integer
    //  - Whole number
    //  - Can take values from -2,147,483,648 to 2,147,483,647
    int integer = 5;

    // Double 
    //  - Contains decimal values
    //  - Can take values from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    double decimal_number = 3.57;

    // Character
    //  - Single character (like those on a keyboard)
    //  - Can take values from -128 to 127
    //  - Numerical values correspond to certain characters
    //    - Check out this site to see what number each character corresponds to: https://www.asciitable.com/
    char character = 'A';

    // Boolean
    //  - Has a value of True or False
    //  - Has numeric value of 1 when true and 0 when false
    //     - Cannot be used in mathematical calculations
    std::cout << (true + true);

    return 0;
}
/*
            Variables and Data Types

    Variables are a way for us to store information in our code to be used later. Think of it like a math problem
    where you have to solve for X. X is the variable containing some value.

    Variables can be made for different data types. Data types are the different types of information we can store.
    The most common ones you'll see are the integer (int), double, character (char), boolean (bool), and string.

*/

#include <string> // IMPORTANT: Need this to use string variables

int main() {

    // ################### Declaring a Variable ###################

    // (Data Type) (Variable Name);  <-- No initial Value
    // or
    // (Data Type) (Variable Name) = (Value);  <-- Inintial Value

    // Example (No Initial Value)
    int number_1;

    // Example (Initial Value)
    int number_2 = 10;

    // ################### Data Types Examples ###################

    // Integer
    //  - Whole number
    //  - Can take values from -2,147,483,648 to 2,147,483,647
    int integer = 5;

    // Double 
    //  - Contains decimal values
    //  - Can take values from 2.22507 × 10⁻³⁰⁸ to 1.79769 × 10³⁰⁸
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
    bool boolean = true;

    // String
    //  - A collection of characters (think of text)
    //  - Has to be called using the std (short for standard namespace)
    //     - If you don't know what a namespace is, don't worry about it
    std::string text = "Hello";


    // ################### Other Useful Stuff ###################

    // Constant (const) assemssment
    //  - Used to ensure a variable can't be changed
    //  - If an attempt to change the value of a constant variable is made, an error occurs
    //  - Programmers typically use all uppercase for naming constant variables (not required)
    const double PI = 3.141592;

    // Unsigned
    //  - Used to make integer variables have only positive values + 0
    unsigned int number = 5;
    // There is also the "signed" keyword
    // Integer variables are declared signed by default
    signed int value = 90;

    // Short, Long, Long Long, Float, and Size_t
    //  - Essentaully just smaller and larger version of an integer and double
    //  - Short can take values from -32,769 to 32,768
    //  - Long can take values from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    //  - Long Long can take values from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    //  - Float can take values from 1.17549 × 10⁻³⁸ to 3.40282 × 10³⁸
    //  - Size_t automatically adjusts to the size of the variable
    short small_number = 23;
    long big_number = 204538;
    long long bigger_number = 285946372;
    float small_decimal = 5.9;
    size_t auto_var = 297;
    
    return 0;
}
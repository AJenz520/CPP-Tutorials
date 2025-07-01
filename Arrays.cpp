/*
            Arrays

    When programming, we often run into instances where we have a collection of the same data type. For instance,
    you may have the grades that 20 students got on their last exam. Having to keep track of everyone's grades
    is difficult to do with jsut variables. Instead, we can store this information in an array and access specific
    grades later on.

    Format:

    (Data Type) (Array Name)[Size];

    or

    (Data Type) (Array Name)[] = {some data};

*/

#include <iostream>

int main() {

    // Here's an example for declaring two arrays.

    int number_grades[20];
    int letter_grades[] = {'A', 'A', 'B', 'D', 'A', 'B', 'F', 'C', 'A', 'D', 'A', 'B', 'B', 'C', 'B', 'A', 'F', 'C', 'A', 'B'};

    // The number_grades array is declared and has a capacity of 20, meaning it can hold up to 20 items.
    // The letter_grades array is initialized with values. The nuber of values is 20, so the size of this array is 20.

    // ################### Getting Elements From an Array ###################
    //  - To get an elements from an array, we perform what's called indexing. It looks like this:
    //                          array[n]
    // Here, array is the name of the array and n is the index of the element in the array. For instance, if n = 1 then we'd
    // get the 2nd element in the array. For the letter_grades array, this would be the second 'A'.

    // *Keep in mind that array indexes begin with 0, so for our letter_grades array, it would look like this:
    // Element: A A B D A B F C A D A  B  B  C  B  A  F  C  A  B
    // Index:   0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    // Example:
    int fith_student_grade = letter_grades[4]; // 4 is the index of the 5th element


    // ################### Assigning Elements in an Array ###################
    //  - If we want to change the value of an element in an array, we can assign a new value to it by indexing. Here's
    //    how that would look:
    //          array[n] = 9;
    // Here, we assign the element at index n to the value of 9;
    // Example:
    letter_grades[10] = 'B';


    // ################### Array Size ###################
    //  - If you don't know the size of an array, you can find that by using the sizeof() operator. However, it requires being
    //    a little clever with it.

    // The sizeof operator gives you the amount of bytes of storage something takes up. For instance, an integer is 4 bytes, so
    // sizeof(int) would be 4.
    // When using sizeof() on an array, it will give you the size of all the elements in the array.
    // Example:
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers); // size would be 20
    // The size is 20 because each integer has a size of 4 bytes, so 5 integers would be 4 * 5 = 20 bytes.

    // We can find the size of an array by dividing by the data type of the array. 
    // Example:
    int array_size = sizeof(numbers) / sizeof(int); // array_size would be 5
    // Instead of using sizeof(int), we could also use sizeof(numbers[0]). This would get the size of the first element, which
    // is an integer. This is useful when you don't know what the data type of the array is.


    // ################### Things to do with Arrays ###################

    // Finding Certain Elements
    //  - Let's say we wanted to find the lowest grade someone got on the last exam. Here's how we could do that:

    char min_grade = letter_grades[0];  // Initially say the first grade is the lowest
    int grades_size = sizeof(letter_grades) / sizeof(letter_grades[0]);

    for (int i = 1; i < grades_size; i++) { // Loop through all the grades in letter_grades
        if (min_grade > letter_grades[i]) { // Check if the grade at index i is lower than the minimum grade
            min_grade = letter_grades[i];   // If it is, make that the new lowest grade
        }
    }


    // Printing all the Grades
    //  - If we tried outputing the letter_grades array using
    //              std::cout << letter_grades << std::endl;
    //    you'd end up with a weird combination of letters and numbers. This is the memory address of the array, which
    //    has to deal with pointers. If you're not familiar with pointers, don't worry about it for now. Just think of this
    //    as a code that tells the computer where the array is storred.
    //  - If we want to output each element in the array, we'd have the loop through it and print each element seperately. It
    //    would look like this:

    for(int i = 0; i < grades_size; i++) {
        std::cout << letter_grades[i] << " "; 
    }
    std::cout << std::endl;
    // Output: A A B D A B F C A D B B B C B A F C A B

    // Additionally, we could also make use of the for-each loop as so:

    for(char grade : letter_grades) {
        std::cout << grade << " ";
    }
    std::cout << std::endl;


    // Sorting an Array with Bubble Sort
    //  - There are many ways to sort arrays or any other collection of variables. One of the simpliest way is Bubble Sort.
    //    Here's what it looks like:

    for (int i = 0; i < grades_size - 1; i++) {
        for (int j = 0; j < grades_size - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {

                // Swap the values of grades[j] and grades[j + 1]
                double temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
        }
    }
    // Check out this site for an explanation with graphics on how this sorting algorithm works: 
    //   https://www.geeksforgeeks.org/dsa/bubble-sort-algorithm/


    return 0;
}
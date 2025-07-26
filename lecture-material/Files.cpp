/*
        Files

    Files offer us a convenient way to store data. Examples of these are excel, text, and csv files. C++ offers us ways
    to access and edit a files as we wish.



*/

#include <iostream>
#include <fstream> // <-- Needed to use file features

int main() {

    // Reading text from a file
    //  - To open a file for reading, we use the ofstream() function
    std::ifstream MyFile("filename.txt");
    //  - The name MyFile is the name of the file accesser
    //     - This name can be anything you choose
    //  - filename.txt is the name of the file
    //     - Of course, you'll want to put in the actual name of a file in your C++ project
    
    // We can now get text from the file using either the get() or getline() functions
    
    

    return 0;
}
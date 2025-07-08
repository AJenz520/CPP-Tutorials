/*
            Vectors

    When we want to store multiple versions of the same data type, an easy solution is to use an array. However, arrays
    can only hold up to a certain amount of items, that number being determined when we initialize the array. If we want
    to store more items, we'd have to create a whole other array. This is a very inefficient process as it can take up
    too much memory space.

    A more effective way of having a flexible storage capacity, often called a dynamic array, is to use a vector. Vectors
    are essentually identical with the key difference being that their capacity is not fixed and can increase/decrease
    whenever we add/remove items.

    Format:

    std::vector<(Data Type)> (Vector Name);

    or

    std::vector<(Data Type)> (Vector Name) = {(Initial Data)};

*/

#include <iostream>
#include <vector>  // <-- Needed to use vectors

int main() {

    // Example (No Initial Data)
    std::vector<int> numbers;

    // Example (Initial Data)
    std::vector<std::string> names = {"Josh", "Elizabeth", "Muhammad", "Cameron", "Krystal"};

    // ################### Adding Elements ###################
    //  - We can add elements by using the push_back() function.
    numbers.push_back(1);
    //  - This adds an integer with value 1 to the end of the numbers vector.

    //  - We can also add elements to specific indexes using the insert() function.
    names.insert(1, "Ronaldo");
    //  - This adds the name Ronaldo to index 1 (second element) in the names vector.
    //     - All other names at and after index 1 in the original vector are moved to the right by 1.


    // ################### Removing Elements ###################
    //  - We can remove elements by using the pop_back() function.
    names.pop_back();
    //  - This will remove the element from the end of the names vector, in this case the name Krystal.
    // There are ways of removing elements other than those at the end of a vector, though this is a bit more
    // complicated, so it will be saved for later. If you're curious, you can always look it up and try it yourself.


    // ################### Accessing Elements ###################
    //  - Getting an element from a vector is identical to how we do it with arrays
    // The two ways we can access an element are by using bracker ([]) indexing or the at() function.
    // Examples:
    std::string name_1 = names[2];
    std::string name_2 = names.at(1);
    // These two access the 3rd and 2nd elements, respectively, of the names vector and assign those values to variables.
    // * A key difference between the two is that if the program tries accessing an index that is out of range then an error
    // message will be given for the at() function while using the brackets could result in the program crashing.

    // Here are examples of trying to access an element out of range:
    // std::string name = names[-1];  <-- Indexes can only be positive
    // std::string name = names[20];  <-- There is no 20th index

    //  - We can also access the first and last elements of a vector using the front() and back() functions.
    std::string first = names.front();
    std::string last = names.back();


    // ################### Changing Elements ###################
    //  - We can change an element in a vector similarly to how we do it with arrays.
    // Examples:
    names[3] = "Jackson";
    names.at(2) = "Amelia";
    // Here, we changed the 4th element to Jackson and the 3rd element to Amelia


    // ################### Other Functions ###################
    // Vector Size
    //  - We can get the size of a vector (number of elements it contains) by using the size() function
    int number_of_names = names.size();

    // Check if empty
    //  - We can check if a vector is empty (has zero elements) by using the empty() function
    bool is_empty = names.empty();

    // Clearing a Vector
    //  - If we want to get rid of all elements in a vector, we can use the clear() function
    names.clear();
    
    return 0;
}
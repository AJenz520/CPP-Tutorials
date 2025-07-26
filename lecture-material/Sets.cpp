/*
            Sets

    Sets allow us to store data without being limited by a fixed amount of space. They are similar to vectors, but with
    some key differences. One of the main differences is that sets automatically manage duplicates for us. If we try to
    insert a duplicate value into a set, it will simply be ignored. This makes sets a great choice when we need to
    maintain a collection of unique elements.

    Format:

    std::set<data_type> set_name;
    std::set<data_type> set_name = {value1, value2, value3, ...};
*/

#include <iostream>
#include <set> // <-- Required for using sets

int main() {

    // Declaring a set
    std::set<int> numbers;
    std::set<std::string> names = {"Alice", "Bob", "Charlie"};

    // Inserting elements into the set
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(10);
    // Here, the second insertion of 10 will be ignored.



    // Sorting elements in the set

    // Sets automatically sort elements in ascending order.
    // We can see this by iterating through the set.
    for (int num : numbers) {
        std::cout << num << " "; // Output: 10 20 30
    }

    // If we want the elements in descending order, we can use a custom comparator.
    std::set<int, std::greater<int>> descending_numbers = {30, 20, 10};
    // Now if we iterate through descending_numbers, it will print in descending order.
    for (int num : descending_numbers) {
        std::cout << num << " "; // Output: 30 20 10
    }



    // Other Operations

    // Removing an element
    numbers.erase(20); // Removes 20 from the set

    // Removing all elements
    numbers.clear(); // Now the set is empty

    // Getting the size of the set
    std::cout << "Size of names set: " << names.size() << std::endl; // Output: Size of names set: 3

    // Checking if the set is empty
    if (names.empty()) {
        std::cout << "The names set is empty." << std::endl;
    } else {
        std::cout << "The names set is not empty." << std::endl; // Output: The names set is not empty.
    }

    // Checking if an element exists in the set
    if (names.find("Alice") != names.end()) {
        std::cout << "Alice is in the set." << std::endl; // Output: Alice is in the set.
    } else {
        std::cout << "Alice is not in the set." << std::endl;
    }

    return 0;
}
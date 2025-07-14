/*
            Maps

    Maps allow us to store key-value pairs. The way this works is that we have a key that is unique to each value.
    This means that we can use the key to access the value. It is similar to how we use indexes to access elements in
    an array or vector. The difference is that the key can be any data type, not just an integer.

    This is useful when we want to store data that is associated with a specific key. Think of it like a dictionary
    where we have a word (the key) and its definition (the value). We can use the word to look up its definition.

    Format: 

    std::map<key_type, value_type> map_name;
    std::map<key_type, value_type> map_name = {
        {key1, value1},
        {key2, value2},
        // ...
    };

    // Note: The second format is equivalent to writing:
    std::map<key_type, value_type> map_name = { {key1, value1}, {key2, value2}, ...};
    // It's common when initializing a map with key-value pairs to put each entry on a new line for clarity.
*/

#include <iostream>
#include <map> // <-- Needed to use maps

int main() {

    // Example Map
    std::map<std::string, int> name_to_age;

    // Adding key-value Pairs
    //  - There are multiple ways to add key-value pairs to a map
    //  - One way is to use the insert() function like so:
    name_to_age.insert({"Bella", 20});
    name_to_age.insert({"Abraham", 36});
    //  - Alternatively, we can assign keys in the map with certain values using either the [] or the at() function
    name_to_age["Megan"] = 43;
    name_to_age.at("Toby") = 22;

    // Getting values from a Map
    //  - We can get the values storred in a key-value pair in a similar manner to how we access elements in an array
    //    or vector by indexing.
    //  - In this case, the index is the key
    int megan_age = name_to_age["Megan"];
    int abraham_age = name_to_age.at("Abraham");


    // Removing key-value Pairs
    //  - We can get rid of a key-value pair by using the erase() function like so:
    name_to_age.erase("Toby");
    //  - Here, we removed the key-value pair for Toby

    //  - We can also remove all key-value pairs using the clear() method
    name_to_age.clear();
    

    // Getting the Size of a Map
    //  - We can get the number of key-value pairs in a map using the size() function
    int size = name_to_age.size();


    // Check if a Map is Empty
    //  - We can check if a map has no key-value pairs (is empty) by using the empty() function
    bool isEmpty = name_to_age.empty();

    return 0;
}
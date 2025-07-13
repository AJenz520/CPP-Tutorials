/*
            Namespaces
    
    Namespaces are used to organize code into logical groups and to prevent name collisions. If you've ever outputted
    something to the console, you've probably used the `std` namespace. This is the standard namespace that contains
    all the standard C++ library functions and objects. For example, `std::cout` is used to output text to the console.

    You can create your own namespaces to organize your code. The format is as follows:

    namespace NamespaceName {
        // Your code
    }

    Additionally, if we want to access a variable or function without using the namespace prefix, we can use the `using` directive:

    using NamespaceName::variableName;
    using NamespaceName::functionName;

*/

#include <iostream>

using std::cout, std::endl;
// Having this line allows us to use `cout` and `cin` without the `std::` prefix

// We can also write:
// using namespace std;
// This allows us to use all the names in the `std` namespace without the `std::` prefix.
// However, it's not recommended to do this in larger projects as it can lead to name collisions.

namespace MyNamespace {
    std::string name = "Alex";

    void greet(std::string person) {
        cout << "Howdy, " << person << "!" << endl;
    }
}
// This creates a namespace called MyNamespace with a variable and a function


// Let's create a function with the same name as the one in MyNamespace but with a different output
void greet(std::string person) {
    cout << "Hello, " << person << "!" << endl;
}

int main() {

    // Let's create a variable with the same name as the one in MyNamespace but with a different value
    std::string name = "Mary";

    // If we output the variable name and call the greet function, we will see that the variable and function in the global namespace
    cout << "Name: " << name << endl; // Outputs: Name: Mary
    greet("Steve"); // Outputs: Hello, Steve!


    // To access the variable and function in MyNamespace, we need to use the scope resolution operator `::`
    cout << "MyNamespace Name: " << MyNamespace::name << endl; // Outputs: MyNamespace Name: Alex
    MyNamespace::greet("Catherine"); // Outputs: Howdy, Catherine!

    return 0;
}
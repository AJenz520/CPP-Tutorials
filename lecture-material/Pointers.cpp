/*
            Pointers
    
    Pointers are variables that store the address of another variable. They are a powerful feature that allow us to manipulate
    memory directly, which can lead to more efficient code and greater control over how data is stored and accessed. Think of
    a pointer as a signpost that points to a specific location in memory where a variable is stored.

    Declaring Pointers
     - To declare a pointer, we use the asterisk (*) symbol before the variable name. For example, to declare a pointer to an
       integer, we would write:
       
       int a;

       int* ptr;
       int* ptr = &a;

     - This declares a pointer named ptr that can point to an integer variable.
     - The ampersand (&) operator is used to get the address of a variable. In the example above, ptr is assigned the address of
       the variable a.

    We can also dereference a pointer to access the value it points to. This is done using the asterisk (*) operator again, but 
    this time we use it in front of the pointer variable.

*/

#include <iostream>


// Pointers with Functions

void increment1(int n) {
    n++;
}

void intcrement2(int* n) {
    (*n)++;
}

void increment3(int& n) {
    n++;
}
// Here, we define three functions that add 1 to an integer.
// 1) With the first function, we pass the integer by value, meaning that any changes made to n inside the function 
//    will not affect the original variable.
// 2) In the second function, we pass a pointer to the integer. This allows us to modify the original variable by 
//    dereferencing
// 3) In the third function, we pass a reference to the integer. This also allows us to modify the original variable 
//    without using a pointer.


int main() {

    // Example using pointers
    int number = 64;
    int* pNumber = &number;
    // Note: It's a common naming convention to use 'p' as a prefix for pointer variables, though this is not required.

    // If we output pNumber, we will see the address of the variable number in memory.
    std::cout << "Address of number: " << pNumber << std::endl;
    // The result of this output will be something like 0x7ffeedc4b8c0 (it depends on your system and the current state of memory).
    // This combination of letters and numbers is the memory address represented as a hexadecimal value.

    // To access the value stored at that address, we can dereference the pointer:
    std::cout << "Value at address: " << *pNumber << std::endl;
    // This will output 64, which is the value stored in the variable number.

    // Since pNumber points to the address of number, we can also change the value of number through the pointer:
    *pNumber = 10;
    // We can check this by outputting the value of number:
    std::cout << "New value of number: " << number << std::endl; // Output will be 10

    // Now, what would happen if we change pNumber directly?
    // We could perform the following operation:
    pNumber++;
    // This will change pNumber to point to the next memory address.
    std::cout << "New address of pNumber: " << pNumber << std::endl;
    // We can see that the new address is equal to the previous address plus 1.
    // Unless we know what this new address, it's not recommended to change the pointer like this, as it may lead to 
    // undefined behavior if we try to dereference it.



    // Pointers with Arrays
    int numbers[] = {1, 2, 3, 4, 5};
    // If we tried outputting numbers directly, we'd get something that looks like a hexadecimal address
    std::cout << "Address of numbers: " << numbers << std::endl;
    // This is because arrays in C++ act similarly to pointers
    // The name of the array is actually a pointer to the first element of the array.
    // When we index into the array, we're essentually dereferencing the pointer
    // We can see this by dereferencing the pointer to the first element:
    std::cout << "First element of numbers: " << *numbers << std::endl; // Output will be 1

    // To further illustrate this, if we add 1 to numbers, we will get the address of the second element in the array:
    std::cout << "Address of second element: " << numbers + 1 << std::endl;
    // Deferencing this pointer will give us the value of the second element:
    std::cout << "Second element of numbers: " << *(numbers + 1) << std::endl; // Output will be 2

    

    // Pointers of Pointers
    // We can also have pointers that point to other pointers.
    int** ppNumber = &pNumber;
    // Here, ppNumber is a pointer to the pointer pNumber.
    // Outputting ppNumber will give us the address of pNumber:
    std::cout << "Address of pNumber: " << ppNumber << std::endl;

    // Dereferencing ppNumber will give us the value of pNumber, which is the address of number:
    std::cout << "Value at ppNumber: " << *ppNumber << std::endl;

    // If we dereference ppNumber twice, we will get the value of number:
    std::cout << "Value at address pointed by ppNumber: " << **ppNumber << std::endl; // Output will be 10

    // We can have as many levels of pointers as we want, but it's important to keep track of what each pointer points to.
    int*** pppNumber = &ppNumber;



    // Dynamic Memory Allocation

    // There are two main ways memory can be allocated in C++: stack and heap.

    // Stack memory is automatically managed by the compiler and is used for local variables and is automatically freed
    // when the function returns.
    //  - This includes variables declared inside functions, such as the number variable
    //  - Think of stack memory as short-term storage

    // Heap memory, on the other hand, is managed manually by the programmer and is used for dynamic memory allocation.
    //  - This is used for variables that need to persist beyond the scope of a function
    //  - Think of heap memory as long-term storage

    // To allocate memory on the heap, we use the new operator:
    int* num1 = new int;
    // This allocates memory for an integer on the heap and returns a pointer to that memory.

    // We can then assign a value to that memory:
    int* num2 = new int(56);
    // This allocates memory for an integer on the heap and initializes it with the value 56.

    // We can also allocate an array of integers on the heap:
    int* nums = new int[5];
    // This allocates memory for an array of 5 integers on the heap.

    // It's important to remember that when we allocate memory on the heap, we need to free it when we're done using it.
    // This is done using the delete operator:
    delete num1;
    delete num2;

    // For arrays, we can free all the memory at once using the delete[] operator:
    delete[] nums;

    // If we forget to free the memory, it will lead to a memory leak
    // This is where memory is allocated on the heap but never freed, meaning we lose access to it and it cannot be reused.
    // Memory leaks can lead to performance issues and can cause the program to crash if the system runs out of memory.

    return 0;
}
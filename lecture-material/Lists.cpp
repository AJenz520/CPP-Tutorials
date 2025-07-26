/*
            Lists

    On the surface, lists are essentually the same as vectors. They allow us to store data without being limited
    by a fixed amount of space. The difference between these two arrises in how we access and add/remove elements.

    Accessing Elements
     - Every element in a vector has an associated index. This idex can be thought of as pointing to each element
       like so for the vector {3, 6, 2, 9}:

       Index    Element
         0  -->   3
         1  -->   6
         2  -->   2
         3  -->   9

        This makes accessing elements in a vector a quick process.
    
     - For lists, we have direct access to the first and last elements, but not any inbetween. This is because 
       each element has access to the first elements before and after it, but not any of the others. We can model
       thise for the list {3, 6, 2, 9} like such:

       --> 3 <--> 6 <--> 2 <--> 9 <--

       The arrows represent what we have access to from each element. This makes accessing elements in a list to
       be more time consuming than a vector. For instance, say we wanted to get the element in the middle of the list.
       To do this, we'd have to start at either the first or last element and traverse through the list until we get
       to the middle element. For small lists, this isn't too bad, but for large list, it will cause a noticable delay
       in our computer's performance.


    Adding/Removing Elements
     - Whenever we add or remove elements in a vector, all indexes are adjusted for the changes we made. For instance,
       let's say we add an element at the beginning of a vector. This new element would now have the zero index. This
       means the element that previously had the zero index will now be moved up to index 1. This process will then
       occur for every other element in the vector. The process is illustrated bellow:

       Before                   After (Added 7)

       Index    Element         Index   Element
         0  -->   3               0  -->   7
         1  -->   6               1  -->   3
         2  -->   2               2  -->   6
         3  -->   9               3  -->   2
                                  4  -->   9
       
       Having to change every index makes adding/removing elements a slow process for vectors.

     - For lists, this process is a lot quicker. When we add/remove elements, all we have to do is change 1 or 2
       pointers. For instance, let;s say we wanted to remove the second element in the list {3, 6, 2, 9}. To do this,
       all we have to do is remove the 6 and then change the pointer on the 3 to point to the 2 and change the pointer
       on the 2 to point to the 3. This is illustrated bellow:

                Before                              After

       --> 3 <--> 6 <--> 2 <--> 9 <--       --> 3 <--> 2 <--> 9 <--
        
       This makes adding/removing elements a quick process for lists.


    Overall, if your program is going to involve a lot of adding/removing elements, it's best to use a list. If it
    involves more getting elements, it's better to use a vector. In general, it's recommened to use vectors more if
    you're a beginner since your programs likely won't be that complex to warrent using a list. Once your programs
    start getting larger, though, using a list will be greatly beneficial for improving the performance of your programs.

*/

#include <iostream>
#include <list>  // <-- Needed to use lists

int main() {

    // Creating a list
    std::list<int> numbers;
    //or
    std::list<std::string> names = {"Jones", "Amelia", "Parker", "Emily"};

    

    return 0;
}
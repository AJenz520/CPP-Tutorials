/*
        Search Algorithms
    
    When programming, we may find ourselves in situations where we have some data set (array, vector, etc.) and we need
    to find where some element is located in it, if at all. Of course, there are more efficient ways of doing this than
    others. Twwo common ones are linear search and binary search.

    Linear Search:

        How it Works:
            The idea is simple: start at the beginning and go through the data set until you've found what you're looking
            for or once you've reached the end.

        Efficiency:
            This algorithm is simple to create, but it's not very efficient. In the best case, where the element is at
            the beginning of the data set, it would only take checking the first element to find what we're looking for.
            In the worst case, the element would be at the end of the data set, or not in it at all. This would mean we'd
            check every element in the data set. For large data sets, this would take a lot of time to do.

        Time Complexity:
            O(n) - n is the target of elements in the data set. This means it would take at worst n checks to find our element.

    
    Binary Search:

        ***Note: This algorithm only works if we're working with a sorted data set.***

        How it Works:
            Let's say we have some array like,
                {1, 2, 3, 4, 5, 6, 7}
            and we want to find 5.

            We first look at the element in the middle of our array, which is 4. 4 is not what we're looking for, so we now
            compare 5 to 4. We see that 5 is greater than 4, so we'll now only consider the elements that are greater than 4, 
            which are all the elements to the right of 4. We now consider a smaller array within our current array that contains
            the elements from the just after 4 to the end of the array. This is,
                {5, 6, 7}

            We now repeat the same process until we've found our element, assuming it's in the array.

            We'd look at the middle of this subarray, which is 6. 6 is not 5 so we compare it to 5. 5 is less than 6,
            so we'll now consider the elements less than 5 in this subarray. This creates the new subarray,
                {5}

            5 is the only element, so it's also the middle element. We look at 5 and find that it's equal to 5. We've
            found our element!

        Efficiency:
            Binary search is a bit more complex to understand and code, but it's a very efficient way to search for items.
            In the above example, we only had to check 3 elements to find the one we were looking for. Had we used linear
            search, we would've had to check 5 elements. This doesn't make a big difference for small data sets, but for
            large ones (think of one with 1,000,000 elements), binary search will be significantly faster.

        Time Complexity:
            O(log(n)) - This symbolizes how we cut the data set in half each time we check a new element

*/

#include <iostream>

int main() {

    // Linear Search Implementation
    int targets[] = {4, 5, 8, 3, 0, 7, 9, 1, 2, 6};
    int target_to_find = 9;

    int size = sizeof(targets) / sizeof(int);

    for (int i = 0; i < size; i++) {
        if (targets[i] == target_to_find) {
            std::cout << target_to_find << " is located at index " << i << std::endl;
            break;
        }

        // This checks if we've reached the end of the array and didn't find the element
        if (i == size - 1) {
            std::cout << target_to_find << " is not in the array." << std::endl;
        }
    }


    // Binary Search Implementation
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 8;

    // Keep track of the endpoints of subarrays
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = (left + right) / 2;

        // Check for the target
        if (nums[middle] == target){
            std::cout << "The number " << target << " is at index " << middle;
            break;
        }
        // Check if target is smaller than middle
        if (target < nums[middle]) {
            right = middle - 1;
        }
        // Check if target is larger than middle
        else {
            left = middle + 1;
        }

        if (left > right) {
            std::cout << target << " is not in the array." << std::endl;
        }

    }


    return 0;
}
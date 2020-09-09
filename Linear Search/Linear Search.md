# [Linear Search Algorithm](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Linear%20Search)
: A linear search runs in at the worst linear time and makes at most n comparisons, where n is the length of the list. If each element is equally likely to be searched, then the linear search has an average case of `(n+1)/2` comparisons, but the average case can be affected if the search probabilities for each element vary. 
* The time complexity of the above algorithm is O(n).
* Linear search is rarely used practically because other search algorithms such as the binary search algorithm and hash tables allow significantly faster-searching comparison to Linear search.

## Basic algorithm
Given a list L of n elements with values or records L0... Ln−1, and target value T, the following subroutine uses a linear search to find the index of the target T in L.

>* Set i to 0.
>* If Li = T, the search terminates successfully; return i.
>* Increase i by 1.
>* If i < n, go to step 2. Otherwise, the search terminates unsuccessfully.

## A simple approach is to do linear search
: A linear search sequentially checks each element of the list until it finds an element that matches the target value. If the algorithm reaches the end of the list, the search terminates unsuccessfully.
>* Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
>* If x matches with an element, return the index.
>* If x doesn’t match with any of elements, return -1.

## Pseudo Code
* `int func(arr, x)`
* >` for i = 0  to i < n`
* >>`if arr[i] == x`
* >>>` then return i`
* >>` else return -1`

## [Code](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Linear%20Search)
>* [C Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Linear%20Search/Linear%20Search.c)
>* [C++ Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Linear%20Search/Linear%20Search.cpp)
>* [Java Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Linear%20Search/Linear%20Search.java)
>* [Pyhton Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Linear%20Search/Linear%20Search.py)

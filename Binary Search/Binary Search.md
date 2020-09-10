# [Linear Search Algorithm](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Binary%20Search)
: Binary Search is a search algorithm that finds the position of a target value within a sorted array.Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array.
* The time complexity of the above algorithm is O(logn).
* There are two approaches to this algorithm :-
>* [Iteration approach](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Binary%20Search/Iterative%20Approach)
>* [Recursion approach](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Binary%20Search/Recurssion%20Approach)

## Basic algorithm
Given an array A of n elements with values or records A0, A1, A2,.....,An-1 sorted such that A0 < A1 < A2 < ..... < An-1 and target value T, the following subroutine uses binary search to find the index of T in A.

Set `L` to `0` and `R` to `n-1`.
If `L > R`, the search terminates as unsuccessful.
Set `m` (the position of the middle element) to the floor of `(L+R)/2`, which is the greatest integer less than or equal to `(L+R)/2`.
If `Am < T`, set `L` to `m+1` and go to step 2.
If `Am > T`, set `R` to `m-1` and go to step 2.
Now `Am = T`, the search is done; return `m`.


## A simple approach is to do Binary search
: A binary search break array(list) into two halve by finding a pivot(MIDDLE VALUE) and checks middle element of the list until it finds an element that matches the target value. If the algorithm reaches the end of the list, the search terminates unsuccessfully.
>* Start from finding MIDDLE VALUE element of arr[] and compare x with MIDDLE VALUE element of arr[]
>* If MIDDLE VALUE matches with an x, return the MIDDLE VALUE index.
>* If MIDDLE VALUE less than x, return calling function by placing MIDDLE VALUE - 1 at HIGH VALUE.
>* If MIDDLE VALUE greater than x, return calling function by placing MIDDLE VALUE + 1 at LOW VALUE.
>* If MIDDLE VALUE doesn’t match with any of elements, return -1.

## Pseudo Code

* [Recursion Method](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Binary%20Search/Recurssion%20Approach)
>* `int func(arr, x)`
>* >` if high >= low`
>* >>`mid = low + (high - low) / 2`
>* >>`if arr[mid] == x`
>* >>>`then return mid`
>* >>`elif arr[mid] > x`
>* >>>`return func(arr,x,low,mid - 1)`
>* >>`else`
>* >>>`return func(arr,x,mid + 1,high)`
>* >`else return-1`

* [Iterative Method](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Binary%20Search/Iterative%20Approach)
>* `int func(arr, x)`
>* >` while high >= low`
>* >>`mid = low + (high - low) / 2`
>* >>`if arr[mid] == x`
>* >>>`then return mid`
>* >>`elif arr[mid] > x`
>* >>>`return high = mid - 1`
>* >>`else`
>* >>>`return low = mid + 1`
>* >`else return-1`

## [Code](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Linear%20Search)
* [Binary search using recursion](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Binary%20Search/Recurssion%20Approach)
>* [C Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Binary%20Search/Recurssion%20Approach/Binary%20Search.c)
>* [C++ Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Binary%20Search/Recurssion%20Approach/Binary%20Search.cpp)
>* [Java Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Binary%20Search/Recurssion%20Approach/Binary%20Search.java)
>* [Pyhton Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Binary%20Search/Recurssion%20Approach/Binary%20Search.py)

* [Binary search using iteration](https://github.com/anubhavsharma430/Advance-Algorithms/tree/master/Binary%20Search/Iterative%20Approach)
>* [C Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Binary%20Search/Iterative%20Approach/Binary%20Search%20using%20loop.c)
>* [C++ Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Binary%20Search/Iterative%20Approach/Binary%20Search%20using%20loop.cpp)
>* [Java Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Binary%20Search/Iterative%20Approach/Binary%20Search%20using%20loop.java)
>* [Pyhton Language](https://github.com/anubhavsharma430/Advance-Algorithms/blob/master/Binary%20Search/Iterative%20Approach/Binary%20Search%20using%20loop.py)
# Move Zeros To End

## Problem Statement
Given an array of integers, move all zeros to the end of the array while maintaining the relative order of non-zero elements.

---

## Example

Input:
5  
1 0 2 0 4  

Output:
1 2 4 0 0

---

## Approach
- Use two pointer technique.
- Traverse the array.
- Maintain a pointer `j` to track position of next non-zero element.
- Swap non-zero elements with `j` index.

---

## Edge Cases Handled
- Array containing all zeros
- Array containing no zeros
- Single element array

---

## Time Complexity
O(n)

---

## Space Complexity
O(1)

---

## Language Used
C++

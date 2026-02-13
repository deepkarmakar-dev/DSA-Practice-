# Second Largest Element in Array

## Problem Statement
Given an array of integers, find the second largest element in the array.  
If the second largest element does not exist, return -1.

---

## Example

Input:
5  
1 4 2 7 5  

Output:
5

---

## Approach
- Traverse the array once.
- Maintain two variables:
  - `maxi` → stores largest element
  - `smax` → stores second largest element
- Update values while iterating through array.

---

## Edge Cases Handled
- Array with single element
- Array with all elements equal
- Array containing negative numbers

---

## Time Complexity
O(n)

---

## Space Complexity
O(1)

---

## Language Used
C++

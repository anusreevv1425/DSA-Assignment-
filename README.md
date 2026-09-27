# DSA Assignment 2 - Question 3

## Finding the Highest Student Score

### Subject
PCCST303 - Data Structures and Algorithms

## Problem

Find the highest student score using Max Heap and Linear Search.
Compare their performance for finding the maximum, inserting a
new score, and increasing the number of students.

## Student Scores

78, 92, 65, 88, 95, 72, 84, 90

## Programs Implemented

1. Max Heap
2. Linear Search

## Max Heap

The final Max Heap is:

95 92 90 78 88 65 72 84

The highest score is:

95

Since the maximum element is stored at the root of a Max Heap,
the maximum can be accessed directly.

## Linear Search

The highest score is:

95

For 8 students, Linear Search requires 7 comparisons.

## Complexity Analysis

| Operation | Max Heap | Linear Search |
|---|---|---|
| Find Maximum | O(1) | O(n) |
| Insert New Score | O(log n) | O(1) for simple insertion |
| Space | O(n) | O(n) |

## Effect of Increasing Number of Students

As the number of students increases, Linear Search requires more
comparisons to find the maximum.

In a Max Heap, the maximum remains at the root, so finding the
maximum remains O(1). Insertion takes O(log n).

## Conclusion

Max Heap provides direct access to the highest score through the
root. It is suitable when the system needs to maintain and
repeatedly access the highest student score.

## Files

- max_heap.c - Max Heap insertion program
- linear_search.c - Linear Search program
- input.txt - Student scores
- output.txt - Program output
- trace_table.md - Max Heap trace table
- comparison.md - Comparison and complexity analysis

# Comparison and Complexity Analysis - Question 3

## Max Heap vs Linear Search

| Operation | Max Heap | Linear Search |
|---|---|---|
| Find Maximum | O(1) | O(n) |
| Insert New Score | O(log n) | O(1) for simple insertion |
| Maintain Maximum | Efficient | Requires tracking/search |
| Space | O(n) | O(n) |

## Max Heap

The highest score is always stored at the root of the Max Heap.

For the given data, the highest score is:

95

Finding the maximum requires direct access to the root.

Time Complexity: O(1)

## Linear Search

Linear Search checks the elements one by one to find the maximum.

For 8 scores, 7 comparisons are required.

Time Complexity: O(n)

## Effect of Increasing Students

As the number of students increases, Linear Search requires
more comparisons to find the maximum.

In a Max Heap, the maximum remains at the root, so finding
the maximum remains O(1). Insertion takes O(log n).

## Conclusion

For continuously maintaining the highest student score,
Max Heap provides direct access to the maximum score through
the root. Therefore, it is suitable when the system needs to
maintain and repeatedly access the highest score.

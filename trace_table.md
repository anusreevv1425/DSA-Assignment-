# Trace Table - Question 3

## Max Heap Insertion

Given scores:

78, 92, 65, 88, 95, 72, 84, 90

| Step | Inserted Score | Heap |
|---|---:|---|
| 1 | 78 | 78 |
| 2 | 92 | 92 78 |
| 3 | 65 | 92 78 65 |
| 4 | 88 | 92 88 65 78 |
| 5 | 95 | 95 92 65 78 88 |
| 6 | 72 | 95 92 72 78 88 65 |
| 7 | 84 | 95 92 84 78 88 65 72 |
| 8 | 90 | 95 92 90 78 88 65 72 84 |

## Final Max Heap

95 92 90 78 88 65 72 84

## Maximum

Highest score = 95

Max Heap:
Maximum is available at the root.

Linear Search:
7 comparisons are required for 8 scores.

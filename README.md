# Closest-pair-of-points

# Closest Pair of Points using Divide and Conquer

## Overview
This project implements the **Closest Pair of Points Algorithm** using the **Divide and Conquer** technique in C. The program finds the pair of points with the minimum Euclidean distance from a given set of points in a 2D plane.

The project was developed as part of the **Design and Analysis of Algorithms (DAA)** course.

---

## Features
- Efficient Divide and Conquer implementation
- Time Complexity: O(n log n)
- Handles normal, boundary, and extreme test cases
- Uses Euclidean distance calculation
- Modular and well-commented C code
- Suitable for large datasets

---

## Algorithm Used
### Closest Pair of Points Algorithm
The algorithm recursively divides the set of points into two halves, computes the closest pair in each half, and then checks the strip near the dividing line to find the global closest pair.

Algorithm Paradigm:
- Divide and Conquer

---

## Technologies Used
- Programming Language: C
- Compiler: GCC
- IDE/Editor: VS Code

---

## Libraries Used
```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
```

---

## Time Complexity

| Case | Complexity |
|------|-------------|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

---

## Space Complexity

| Complexity Type | Value |
|-----------------|-------|
| Auxiliary Space | O(n) |

---

## Project Structure

```text
Closest-pair-of-points/
│
├── README.md
├── closest_pair.c
├── test_cases.txt
└── screenshots/
```

---

## Compilation

Use GCC compiler:

```bash
gcc closest_pair.c -o closest_pair -lm
```

---

## Execution

```bash
./closest_pair
```

---

## Sample Input

```text
6
2 3
12 30
40 50
5 1
12 10
3 4
```

---

## Sample Output

```text
Minimum distance = 1.414214
```
## Output Screenshots

### Normal Case
![Normal Case](screenshots/normal_case.png)

### Duplicate Points Case
![Duplicate Case](screenshots/duplicate_case.png)

### Large Input Case
![Large Input](screenshots/large_input.png)
---

## Test Cases Covered
- Normal Inputs
- Minimum Input Case
- Duplicate Points
- Negative Coordinates
- Large Dataset Inputs
- Boundary Cases

---

## Applications
- Computational Geometry
- Geographic Information Systems (GIS)
- Robotics
- Computer Graphics
- Machine Learning
- Nearest Neighbor Search

---

## AI and ML Relevance
The Closest Pair of Points algorithm is used in:
- K-Nearest Neighbors (KNN)
- Clustering algorithms
- Pattern recognition
- Spatial data analysis
- Anomaly detection

---

## Future Enhancements
- Extend to 3D and multidimensional spaces
- Parallel implementation for large datasets
- GUI-based visualization
- Dynamic point insertion support

---

## Author
**Hitha**

---

## References

1. Thomas H. Cormen, *Introduction to Algorithms*, MIT Press.
2. GeeksforGeeks – Closest Pair of Points Algorithm
3. Computational Geometry by Preparata and Shamos
4. Programiz – Divide and Conquer Algorithms

---

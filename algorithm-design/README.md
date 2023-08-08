# The Algorithm Design Manual

## 1. Introduction to algorithm design
Properties of a good algorithm
- correct
- efficient
- easy to implement

Proof of correctness to prove the correctness of an algorithm.

### 1.1. Robot tour opimization
Describe the problem
- Inputs: set of points in the plane
- Output: shortest cycle tour that visits every point of the set

Naive approach

```pseudo
NearestNeighbor(P)
- Pick and visit an initial point p0 from P
- p = p0, i=0
- While there are still unvisited points
  - i=i+1
  - Select pi to be the closest unvisited point to pi−1
  - Visit pi
- Return to p0 from pn−1
```

- This one points out a working set
- Simple to implement
- Completely wrong
    - Not the shortest one returned

Travel saleman problem (TSP)

Take home lesson

> Take-Home Lesson: There is a fundamental diﬀerence between algorithms, which always produce a correct result, and heuristics, which may usually do a good job but without providing any guarantee.

### 1.2. Selecting the right jobs
- Inputs: a set of n intervals on the line
- Output: largest subset of mututally non-overlapping intervals selected from the set


- Put inputs in an array with each element is a pair of
  - pair[0]: starting time
  - pair[1]: ending time
- Sort the array by pair[0]
- From left to right, choose the pair that has shortest length
- Move forward until reaching the last element

- Problem
  - There might be a better solution
  - Greedy approach
  - Approximate

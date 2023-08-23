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

- Problem (of our own solution/approach)
  - There might be a better solution
  - Greedy approach
  - Approximate


Take home lesson

> Reasonable-looking algorithms can easily be incorrect. Algorithm correctness needs to be tested/demostrated carefully.

### 1.3. Reasoning about Correctness

#### 1.3.1. Expressing algorithms

Take home lesson

> The heart of any algorithm is an idea. If your idea is not clearly revealed when you express an algorithm, then you're using too low-level a notation to describe it.

#### 1.3.2. Problems and properties

Problem specifications have two parts
1. the set of allowed input instances.
2. the required properties of the algorithm's output.

**Need to revisit this**

#### 1.3.3. Demonstrating Incorrectness

Prove incorrectness: produce an instance yields an incorrect answer called counter-examples.
Good counter-examples have two important properties

- Verifiability
  1. calculate answer of your algorithm will give for the instance.
  2. display a better answer so as to prove the algorithm doesn't find it.
- Simplicity

Hunting for counter-examples is necessary. Techniques:
- Think small. Looks at small examples because they are easy to verify and reason about.
- Think exhaustively

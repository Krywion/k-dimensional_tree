# K-D Tree Point Search Implementation

An efficient C++ implementation of a k-dimensional tree structure for storing and searching nearest neighbor points in multi-dimensional space.

## Repository Contents

- C++ source files containing the implementation
- Makefile for easy compilation
- Detailed documentation in DOCX format

## Quick Start

To compile and run the program, execute these commands in your terminal:
```bash
make ./myapp
```

## Problem Description

The project addresses the challenge of efficiently storing and searching for coordinates of points closest to a specified point in multi-dimensional space. Traditional data structures like lists and arrays become inefficient from a time complexity perspective due to the high dimensionality of the problem.

## Solution Overview

The solution implements a k-dimensional tree structure that enables efficient space partitioning based on point coordinate values. Each node in this structure represents a point in d-dimensional space. The partitioning process involves comparing values of two points alternately while traversing deeper into the tree structure.

## Complexity Analysis

### Time Complexity
- **Tree Construction**: O(n log n)
  - The tree has log n levels through which we must compare each newly added point
  - Adding n points results in n log n complexity
- **Nearest Neighbor Search**: O(log n)
  - This is achieved when points form a balanced tree (minimum depth)
  - Worst case scenario may reach O(n)

### Space Complexity
- **Memory Usage**: O(n)
  - Always stores exactly n points

## Technical Details

The implementation focuses on optimizing point storage and retrieval in multi-dimensional space, making it particularly useful for applications requiring efficient nearest-neighbor searches in high-dimensional data sets.

# LeetCode Solutions (C++)

> Structured solutions to LeetCode algorithmic problems implemented in modern C++, focusing on optimal time-space complexity and clear problem-solving patterns.

---

## Overview

This repository tracks my journey through Data Structures and Algorithms (DSA). Each solution is written in **C++**, tested against LeetCode test suites, and automatically synced via LeetHub.

### Solved Overview

| Total Solved | Easy | Medium | Hard |
|:---:|:---:|:---:|:---:|
| **6** | 2 | 4 | 0 |

---

## Solutions Catalog

| # | Problem Title | Difficulty | Primary Pattern | Time | Space | Solution |
|:---:|---|:---:|---|:---:|:---:|:---:|
| 0001 | [Two Sum](./0001-two-sum/) | `Easy` | Hash Map / Two Pointers | $O(n)$ | $O(n)$ | [C++](./0001-two-sum/0001-two-sum.cpp) |
| 0002 | [Add Two Numbers](./0002-add-two-numbers/) | `Medium` | Linked List / Carry Math | $O(\max(m, n))$ | $O(\max(m, n))$ | [C++](./0002-add-two-numbers/0002-add-two-numbers.cpp) |
| 0034 | [First and Last Position of Element in Sorted Array](./0034-find-first-and-last-position-of-element-in-sorted-array/) | `Medium` | Binary Search (Bound Checking) | $O(\log n)$ | $O(1)$ | [C++](./0034-find-first-and-last-position-of-element-in-sorted-array/0034-find-first-and-last-position-of-element-in-sorted-array.cpp) |
| 0035 | [Search Insert Position](./0035-search-insert-position/) | `Easy` | Binary Search | $O(\log n)$ | $O(1)$ | [C++](./0035-search-insert-position/0035-search-insert-position.cpp) |
| 0875 | [Koko Eating Bananas](./0875-koko-eating-bananas/) | `Medium` | Binary Search on Answer | $O(n \log(\max(p)))$ | $O(1)$ | [C++](./0875-koko-eating-bananas/0875-koko-eating-bananas.cpp) |
| 1310 | [XOR Queries of a Subarray](./1310-xor-queries-of-a-subarray/) | `Medium` | Prefix XOR Array / Bit Manipulation | $O(n + q)$ | $O(n)$ | [C++](./1310-xor-queries-of-a-subarray/1310-xor-queries-of-a-subarray.cpp) |

---

## Pattern Breakdown

### 1. Binary Search
- **Standard Search:** Logarithmic search over sorted sequences ([LC 35](./0035-search-insert-position/)).
- **Boundary Identification:** Locating first and last occurrences using binary search bounds ([LC 34](./0034-find-first-and-last-position-of-element-in-sorted-array/)).
- **Binary Search on Answer:** Minimizing maximum speed over a monotonic feasibility function ([LC 875](./0875-koko-eating-bananas/)).

### 2. Prefix Computations & Bit Manipulation
- **Prefix XOR:** Answering range XOR queries in $O(1)$ time by exploiting the property $XOR(L..R) = prefix[R+1] \oplus prefix[L]$ ([LC 1310](./1310-xor-queries-of-a-subarray/)).

### 3. Linked List Manipulation
- **Node Traversal & Carry Arithmetic:** Simulating column-by-column digit addition with dynamic node allocation ([LC 2](./0002-add-two-numbers/)).

### 4. Hash Map Lookup
- **Complement Lookup:** Transforming $O(n^2)$ pair check into $O(n)$ lookup using `std::unordered_map` ([LC 1](./0001-two-sum/)).

---

## Current Focus & Roadmap

- [x] Binary Search variations & monotonic predicates
- [x] Prefix sum / Prefix XOR patterns
- [x] Linked list node-by-node operations
- [ ] Sliding Window & Two Pointer advanced problems
- [ ] Stack & Queue patterns (Monotonic Stack)
- [ ] Binary Trees & Tree Traversals (DFS / BFS)
- [ ] Dynamic Programming fundamentals

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
| Problem Name | Difficulty |
| ------- | ------- |
| [0046-permutations](https://github.com/aarvy257-ai/leetcode-solutions/tree/main/0046-permutations/) | Medium |
## Backtracking
| Problem Name | Difficulty |
| ------- | ------- |
| [0046-permutations](https://github.com/aarvy257-ai/leetcode-solutions/tree/main/0046-permutations/) | Medium |
<!---LeetCode Topics End-->
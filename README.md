# HackerRank 3rd Sem Algorithm Portfolio

## Student Details

* **Name:** Priyadarshini S
* **USN:** R25EF203
* **Course:** B.Tech Computer Science and Engineering
* **Semester:** 3rd Semester
* **Language:** C++
* **HackerRank Profile:** https://www.hackerrank.com/profile/p91312517

## Repository Overview

This repository contains solutions to five algorithmic problems completed as part of the 3rd Semester HackerRank Algorithms and GitHub Coding Portfolio activity.

The solutions demonstrate fundamental algorithmic techniques including array traversal, sorting, insertion operations, and binary search.

## Problems

### 1. Mini-Max Sum

**Folder:** `01-Mini-Max-Sum`

**Problem:** Given five integers, calculate the minimum and maximum sums obtained by summing exactly four of the five integers.

**Approach:**

* Calculate the total sum of all five elements.
* Find the minimum and maximum values.
* Minimum sum = total sum - maximum value.
* Maximum sum = total sum - minimum value.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

**Sample Input:**

```text
1 2 3 4 5
```

**Sample Output:**

```text
10 14
```

**HackerRank:** https://www.hackerrank.com/challenges/mini-max-sum/problem

**Status:** Accepted

---

### 2. Birthday Cake Candles

**Folder:** `02-Birthday-Cake-Candles`

**Problem:** Find the number of candles having the maximum height.

**Approach:**

* Traverse the array once.
* Keep track of the maximum candle height.
* Count how many candles have that maximum height.
* Reset the count when a new maximum is found.

**Time Complexity:** O(n)

**Space Complexity:** O(1) auxiliary space

**Sample Input:**

```text
4
3 2 1 3
```

**Sample Output:**

```text
2
```

**HackerRank:** https://www.hackerrank.com/challenges/birthday-cake-candles/problem

**Status:** Accepted

---

### 3. Insertion Sort – Part 1

**Folder:** `03-Insertion-Sort-Part-1`

**Problem:** Insert the last element of the array into its correct position in the sorted portion and display the array after each shift.

**Approach:**

* Store the last element as the value to insert.
* Compare it with elements from right to left.
* Shift larger elements one position to the right.
* Insert the value into its correct position.
* Print the array after every shift and after insertion.

**Time Complexity:** O(n²) in the worst case

**Space Complexity:** O(1) auxiliary space

**Sample Input:**

```text
5
2 4 6 8 3
```

**Sample Output:**

```text
2 4 6 8 8
2 4 6 6 8
2 4 4 6 8
2 3 4 6 8
```

**HackerRank:** https://www.hackerrank.com/challenges/insertionsort1/problem

**Status:** Accepted

---

### 4. Binary Search

**Folder:** `04-Binary-Search`

**Problem:** Search for a target element in a sorted array using binary search.

**Approach:**

* Set left and right boundaries.
* Find the middle element.
* If the middle element equals the target, return its index.
* If the target is greater, search the right half.
* Otherwise, search the left half.
* Continue until the element is found or the search range becomes empty.

**Requirement:** The input array must be sorted.

**Time Complexity:** O(log n)

**Space Complexity:** O(1)

**Sample Input:**

```text
7
1 3 5 7 9 11 13
9
```

**Sample Output:**

```text
Element found at index: 4
```

**Status:** Completed and tested locally in C++

---

### 5. Mark and Toys

**Folder:** `05-Mark-and-Toys`

**Problem:** Determine the maximum number of toys that can be purchased within a given budget.

**Approach:**

* Sort the toy prices in ascending order.
* Start purchasing from the cheapest toy.
* Keep adding prices while the total remains within the budget.
* Stop when the next toy exceeds the budget.
* Return the number of toys purchased.

**Time Complexity:** O(n log n)

**Space Complexity:** O(log n) auxiliary space for sorting

**Sample Input:**

```text
7 50
1 12 5 111 200 1000 10
```

**Sample Output:**

```text
4
```

**HackerRank:** https://www.hackerrank.com/challenges/mark-and-toys/problem

**Status:** Completed and tested

---

## Complexity Summary

| Problem                 | Approach                       | Time Complexity  | Space Complexity   |
| ----------------------- | ------------------------------ | ---------------- | ------------------ |
| Mini-Max Sum            | Array traversal                | O(n)             | O(1)               |
| Birthday Cake Candles   | Maximum and frequency counting | O(n)             | O(1)               |
| Insertion Sort – Part 1 | Insertion and shifting         | O(n²) worst case | O(1)               |
| Binary Search           | Divide search range by half    | O(log n)         | O(1)               |
| Mark and Toys           | Sorting + greedy selection     | O(n log n)       | O(log n) auxiliary |

## Local Testing

All five C++ programs were compiled and tested successfully in the local development environment using:

```text
g++
```

The sample test cases produced the expected outputs.

## Learning Reflection

This activity helped me strengthen my understanding of basic algorithmic problem solving and complexity analysis. Solving Mini-Max Sum and Birthday Cake Candles improved my ability to process arrays using a single traversal while maintaining required values such as minimum, maximum, and frequency. Insertion Sort – Part 1 helped me understand how elements are shifted and inserted into their correct positions. Binary Search helped me understand how a sorted array can be searched efficiently by repeatedly reducing the search range by half. Mark and Toys demonstrated the importance of sorting before applying a greedy strategy.

I also learned to analyze solutions using time and space complexity instead of focusing only on whether the program produces the correct output. Testing the programs locally after completing the coding challenges helped verify that the GitHub versions work correctly. Maintaining separate folders for each problem also made the repository organized and easier to review. Overall, this activity improved my confidence in implementing algorithms, testing C++ programs, and maintaining a structured coding portfolio on GitHub.

# 📊 LeetCode Problem: Non-overlapping Intervals

## 🧩 Problem Statement

Given an **array of intervals** intervals where `intervals[i] = [starti, endi]`, return the minimum number of **intervals** you need to remove to make the rest of the **intervals non-overlapping**.



> **Note :**
> - Intervals which only touch at a point are non-overlapping. For example, [1, 2] and [2, 3] are non-overlapping.



## 🧠 Approach: Sorting + Greedy Traversal

- First, **sort the intervals** by their starting time.

> Initialize **two pointers**:
> - `i = 0` -> current interval
> - `j = 1` -> next interval
> - `count = 0` -> number of removals

> **Traverse** until `j < n` (size of intervals):
> - If end of `i ≤ start` of `j`, no overlap -> move `i = j`, then `j++`.
> - Else if end of `i ≤ end` of `j`, overlap occurs -> remove interval `j`, increment `count`, then `j++`.
> -Else (end of `i > end of j`), overlap occurs -> remove interval `i`, move `i = j`, `j++` ,  and increment `count`.

- Return **count** as the minimum removals.



## ✅ Example Walkthrough

### Example 1

##### Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
##### Output: 1

##### Explanation: 
<pre> 
- [1,3] can be removed and the rest of the intervals are non-overlapping.
  
</pre>

### Example 2

##### Input: intervals = [[1,2],[1,2],[1,2]]
##### Output: 2

##### Explanation: 
<pre> 
- You need to remove two [1,2] to make the rest of the intervals non-overlapping.
  
</pre>

### Example 3

##### Input: intervals = [[1,2],[2,3]]
##### Output: 0

##### Explanation: 
<pre> 
  - You don't need to remove any of the intervals since they're already non-overlapping.
  
</pre>

## 🛠️ Constraints

- `1 <= intervals.length <= 10^5`
- `intervals[i].length == 2`
- `-5 * 10^4 <= starti < endi <= 5 * 10^4`

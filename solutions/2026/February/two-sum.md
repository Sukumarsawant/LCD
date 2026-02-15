# 1. Two Sum

**Difficulty**: Easy  
**Date**: 2026-02-15  
**Topics**: Array, Hash Table  
**Link**: [LeetCode Problem](https://leetcode.com/problems/two-sum/)

---

## Problem Description

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Example 1:
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

### Example 2:
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

### Example 3:
```
Input: nums = [3,3], target = 6
Output: [0,1]
```

### Constraints:
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.

---

## Approach

### Intuition
The key insight is that for each number in the array, we need to find if its complement (target - current number) exists in the array. Instead of checking every pair of numbers (which would be O(n²)), we can use a hash table to store numbers we've seen and check for complements in O(1) time.

### Algorithm
1. Create a hash map to store each number and its index as we iterate
2. For each number in the array:
   - Calculate the complement needed (target - current number)
   - Check if the complement exists in our hash map
   - If found, return the indices
   - If not found, add the current number and its index to the hash map
3. Continue until we find the pair

### Detailed Explanation
As we iterate through the array, we maintain a hash map where:
- **Key**: The number we've seen
- **Value**: The index of that number

For each element, we first check if `target - current_element` exists in our hash map. If it does, we've found our answer. If not, we add the current element to the hash map and continue.

This approach guarantees we'll find the solution in a single pass through the array.

---

## Solution

### Python
```python
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Hash map to store number and its index
        num_map = {}
        
        # Iterate through the array
        for i, num in enumerate(nums):
            # Calculate the complement
            complement = target - num
            
            # Check if complement exists in hash map
            if complement in num_map:
                return [num_map[complement], i]
            
            # Store current number and its index
            num_map[num] = i
        
        # Should never reach here based on problem constraints
        return []
```

### Java
```java
class Solution {
    public int[] twoSum(int[] nums, int target) {
        // Hash map to store number and its index
        Map<Integer, Integer> numMap = new HashMap<>();
        
        // Iterate through the array
        for (int i = 0; i < nums.length; i++) {
            // Calculate the complement
            int complement = target - nums[i];
            
            // Check if complement exists in hash map
            if (numMap.containsKey(complement)) {
                return new int[] {numMap.get(complement), i};
            }
            
            // Store current number and its index
            numMap.put(nums[i], i);
        }
        
        // Should never reach here based on problem constraints
        return new int[] {};
    }
}
```

### C++
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash map to store number and its index
        unordered_map<int, int> numMap;
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the complement
            int complement = target - nums[i];
            
            // Check if complement exists in hash map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            // Store current number and its index
            numMap[nums[i]] = i;
        }
        
        // Should never reach here based on problem constraints
        return {};
    }
};
```

### JavaScript
```javascript
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    // Hash map to store number and its index
    const numMap = new Map();
    
    // Iterate through the array
    for (let i = 0; i < nums.length; i++) {
        // Calculate the complement
        const complement = target - nums[i];
        
        // Check if complement exists in hash map
        if (numMap.has(complement)) {
            return [numMap.get(complement), i];
        }
        
        // Store current number and its index
        numMap.set(nums[i], i);
    }
    
    // Should never reach here based on problem constraints
    return [];
};
```

---

## Complexity Analysis

### Time Complexity: O(n)
We traverse the array only once. For each element, we perform a hash table lookup and insertion, both of which take O(1) time on average. Therefore, the overall time complexity is O(n), where n is the number of elements in the array.

### Space Complexity: O(n)
In the worst case, we might need to store all elements in the hash map before finding the answer. Therefore, the space complexity is O(n) for the hash map storage.

---

## Example Walkthrough

### Example Input: nums = [2, 7, 11, 15], target = 9

**Step 1**: i = 0, num = 2
- complement = 9 - 2 = 7
- 7 is not in numMap
- Add to numMap: {2: 0}

**Step 2**: i = 1, num = 7
- complement = 9 - 7 = 2
- 2 is in numMap at index 0
- Found the pair!

**Result**: [0, 1]

---

## Alternative Approaches

### Approach 1: Brute Force
Use two nested loops to check every pair of numbers.

**Time Complexity**: O(n²)  
**Space Complexity**: O(1)

```python
def twoSum(nums, target):
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []
```

### Approach 2: Two-Pointer (requires sorted array)
If the array is sorted or we're allowed to modify it, we can use two pointers from both ends.

**Time Complexity**: O(n log n) for sorting + O(n) for two pointers = O(n log n)  
**Space Complexity**: O(1) or O(n) depending on sorting algorithm

Note: This approach changes the original indices, so we'd need to keep track of original positions.

---

## Key Takeaways
- Hash tables are excellent for O(1) lookups and can turn O(n²) problems into O(n)
- The complement pattern (target - current) is common in pair-finding problems
- Trading space for time complexity is often worthwhile
- Single-pass solutions are more efficient than multiple passes
- Always consider the trade-offs between time and space complexity

## Related Problems
- [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- [15. 3Sum](https://leetcode.com/problems/3sum/)
- [18. 4Sum](https://leetcode.com/problems/4sum/)
- [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)

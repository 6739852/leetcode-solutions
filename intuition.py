/**
 * LeetCode Problem: Intuition
 * Language: Python
 * Date: 8/3/2025 at 04:08 PM
 * URL: https://leetcode.com/problems/4sum/solutions/7039567/solution-in-python-by-r3wsh7aw4q-9tby/
 * 
 * Solution:
 */

class Solution(object):
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        nums.sort()
        n = len(nums)
        res = []

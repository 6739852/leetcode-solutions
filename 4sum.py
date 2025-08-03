/**
 * LeetCode Problem: 4sum
 * Language: Python
 * Date: 8/3/2025 at 04:09 PM
 * URL: https://leetcode.com/problems/4sum/submissions/1721881311/
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

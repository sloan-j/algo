"""
EXAMPLE: 
---------
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
"""

class Solution():

	def twoSum(self, nums, target):
		"""
		:type nums: List[int]
		:type target: int
		:rtype: List[int]
		"""
		ans = {}
		for i, elem in enumerate(nums):
			if target - elem in ans:
				return [ans[target - elem], i]
			ans[elem] = i

		println("error: no answer")


# test
print(Solution().twoSum([1, 2, 3, 4], 5))
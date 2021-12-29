class Solution(object):

    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        ret = []

        for n in range(len(nums)):
            for m in range(n + 1, len(nums)):
                if nums[n] + nums[m] == target:
                    ret.append(n)
                    ret.append(m)        

        return ret


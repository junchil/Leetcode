'''
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
'''


def twoSum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    length = len(nums)
    for i in range(length-1):
        for j in range(i+1, length):
            if nums[i] + nums[j] == target:
                print(nums[i] + nums[j])
                return i, j
                break
            else:
                continue

def twoSumNew(nums, target):
    d = {}
    index = 0
    while index < len(nums):
        if target - nums[index] in d:
            #if d[target - nums[index]] < index:
            return [d[target-nums[index]], index]
        else:
            #print(d)
            d[nums[index]] = index
        index = index + 1 


nums = [2, 7, 11, 6, 9, 4]
target = 12
#print(twoSum(nums = nums,target = target))
print(twoSumNew(nums = nums, target = target))

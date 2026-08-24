class Solution:
    def findMin(self, nums: List[int]) -> int:
        '''smallest lies in unsorted portion'''
        l = 0
        h = len(nums)-1
        while l <= h:
            m = (l+h)//2
            if nums[l] == nums[h]:
                return nums[l] 
            elif nums[m] < nums[h]:
                h = m
            else:
                l = m+1
        return nums[l]

        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        for i, value in enumerate(nums):
            sum = 0 
            while value>0:
                digit = value % 10
                value = value//10
                sum = sum + digit
            if sum == i:
                return i
        return -1
            


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
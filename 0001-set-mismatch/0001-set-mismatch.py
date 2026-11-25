class Solution:
    def findErrorNums(self, nums: list[int]) -> list[int]:
        n = len(nums)
        dup = 0 ; nup = 0
        dp = [0] * n
        for i in range(n):
            dp[nums[i]-1] += 1
        for k in range(n):
            if dp[k] == 2: dup = k+1
            elif dp[k] == 0: nup = k+1
        return [dup, nup]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
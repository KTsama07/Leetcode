class Solution:
    def rob(self, nums: list[int]) -> int:
        n = len(nums)
        dp = [-1]*(n+1)
        dp[0]=0
        def func(n: int)->int:
            if n<0: return 0
            if dp[n] != -1: return dp[n]
            dp[n]= max(func(n-2)+nums[n-1],func(n-1))
            return dp[n]
        return func(n)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
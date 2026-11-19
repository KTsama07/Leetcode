class Solution:
    def rob(self, nums: list[int]) -> int:
        n=len(nums)
        dp=[-1]*(n+1)
        if n == 1:
            return nums[0]
        if n == 2:
            return max(nums[0], nums[1])
        dp[0]=0
        dp[1] = nums[0]
        dp[2] = max(nums[0], nums[1])
        for i in range(2,n+1):
            dp[i]=max(dp[i-2]+nums[i-1],dp[i-1])
        return dp[-1]
       
       
        # n = len(nums)
        # dp = [-1]*(n+1)
        # dp[0]=0
        # def func(n: int)->int:
        #     if n<0: return 0
        #     if dp[n] != -1: return dp[n]
        #     dp[n]= max(func(n-2)+nums[n-1],func(n-1))
        #     return dp[n]
        # return func(n)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
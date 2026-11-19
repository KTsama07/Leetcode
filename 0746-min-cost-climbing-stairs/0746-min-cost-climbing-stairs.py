class Solution:
    def minCostClimbingStairs(self, cost: list[int]) -> int:
        n = len(cost)
        dp = [-1]*(n+1)
        def func(n: int)->int:
            if n==0 or n==1: return 0
            if dp[n]!= -1: return dp[n]
            dp[n]=min(func(n-1)+cost[n-1],func(n-2)+cost[n-2])
            return dp[n]
        return func(n)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution:
    def minimumCost(self, nums: list[int], k: int) -> int:
        z = sum(nums)
        n = z//k
        if(z%k==0):
            n = n-1
        cost = int(n*(n+1)//2)
        return cost%(10**9+7)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
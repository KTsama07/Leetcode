class Solution:
    def minimumCost(self, nums: list[int], k: int) -> int:
        z = sum(nums)
        n = z//k
        if(z%k==0):
            n = n-1
        cost = int(n*(n+1)//2)
        return cost%(10**9+7)
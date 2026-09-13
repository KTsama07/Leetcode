class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        prefix = [0] * n
        prefix[0] = height[0]
        for i in range(1,n):
            prefix[i] = max(prefix[i-1],height[i])
        sufix = [0] * n
        sufix[n-1] = height[n-1]
        for i in range(n-2,-1,-1):
            sufix[i] = max(sufix[i+1],height[i])
        
        total = 0
        for i in range(n):
            Lmax = prefix[i]
            Rmax = sufix[i]
            if height[i] < Lmax and height[i] < Rmax:
                total += min(Lmax,Rmax)-height[i]
        
        return total
        


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
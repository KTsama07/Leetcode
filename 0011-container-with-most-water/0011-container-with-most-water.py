class Solution:
    def maxArea(self, height: list[int]) -> int:
        max_area = 0
        l = 0
        r = len(height)-1
        while(l<r):
            curr_area = min(height[l],height[r])*(r-l)
            max_area = max(max_area, curr_area)
            if height[l] > height[r]:
                r-=1
            else: l+=1
        return max_area

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
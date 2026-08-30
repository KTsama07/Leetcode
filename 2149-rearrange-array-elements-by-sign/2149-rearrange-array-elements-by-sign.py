class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        i , j = 0,1
        ans = [0]*len(nums)
        for k in nums:
            if k>0:
                ans[i] = k
                i += 2
            else:
                ans[j]=k
                j+= 2
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
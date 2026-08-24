class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        l = 0
        r = len(nums)-1
        while(l<r):
            m = (l+r)//2
            if nums[l]==nums[r]: return nums[l]
            if m%2==0:
                if nums[m]==nums[m+1]:
                    l = m+1
                else :
                    r = m
            else:
                if nums[m]==nums[m-1]:
                    l = m+1
                else: r = m
        return nums[l]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
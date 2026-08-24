class Solution:
    def findfirst(self,nums: List[int], t: int) -> int:
        n = len(nums)
        l=0;h=n-1
        lb = -1
        while l<=h:
            m = (l+h)//2
            if nums[m]>= t:
                lb = m
                h = m-1
            else: l = m+1
        return lb
    def findlast(self,nums: List[int], t: int) -> int:
        n = len(nums)
        l=0;h=n-1
        ub = n
        while l<=h:
            m = (l+h)//2
            if nums[m] > t:
                ub = m
                h = m-1
            else: l = m+1
        return ub-1
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        first = self.findfirst(nums,target)
        if first == -1 or nums[first] != target:
            return [-1,-1]
        last = self.findlast(nums, target)
        return [first,last]
        
    


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 1: return 1
        k = 0
        curr = nums[0]
        count = 0
        for i in range(len(nums)):
            if nums[i] != nums[i-1]:
                nums[k] = nums[i]
                count = 1
                k+=1
            else :
                while count < 2 :
                    nums[k] = nums[i]
                    k += 1
                    count += 1
        return k
                
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
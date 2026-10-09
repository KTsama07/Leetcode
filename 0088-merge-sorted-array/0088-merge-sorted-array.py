class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        p1 = m-1 ; p2 = n-1; k = m+n-1
        while p2>=0:
            if p1>=0 and nums1[p1] > nums2[p2]:
                nums1[k] = nums1[p1]
                p1-=1
            else :
                nums1[k] = nums2[p2]
                p2-=1
            k-=1
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
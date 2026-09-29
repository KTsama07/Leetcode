class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        # Current Code Review:
        # Time Complexity: O(n) - Single pass through the list.
        # Space Complexity: O(n) - Storing prefix sums in a hash map.
        # 
        # 🚩 ISSUES DETECTED:
        # 1. Logic Error in Map Usage: You are storing the index `mpp[sumi]=i`, but the problem asks for the COUNT of subarrays, not the index. 
        #    A single prefix sum can occur multiple times (especially with negative numbers), and each occurrence forms a valid subarray.
        # 2. Logic Error in Check: `if mpp.get(rem,0)!=0:` will fail if the count of that prefix sum is actually 0 (though unlikely here) or if you're looking for existence.
        #    More importantly, `ans += 1` only increments by 1, but there could be multiple previous indices where `prefix_sum - k` occurred.
        # 3. Edge Case: You handle `sumi == k` with a separate `if`, which works, but a cleaner way is to initialize `mpp = {0: 1}` to represent a prefix sum of 0 occurring once before the array starts.
        #
        # 💡 HINT TO FIX:
        # Instead of `mpp[sumi] = index`, use `mpp[sumi] = mpp.get(sumi, 0) + 1`.
        # When you find `rem` in the map, increment `ans` by `mpp[rem]` (the number of times that sum has appeared).
        
        # 🛠️ FIXING YOUR LOGIC:
        # 1. Initialize mpp with {0: 1} to handle the case where sumi == k automatically.
        # 2. Always update the frequency of the current sum in the map.
        # 3. Use the frequency of (sumi - k) to increment your answer.

        mpp = {0: 1} # Initialize with 0:1 to handle subarrays starting from index 0
        ans = 0
        sumi = 0
        for i, num in enumerate(nums):
            sumi += num
            rem = sumi - k
            
            # If the required prefix sum exists, add its frequency to ans
            if rem in mpp:
                ans += mpp[rem]
            
            # Update the frequency of the current prefix sum in the map
            mpp[sumi] = mpp.get(sumi, 0) + 1
            
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
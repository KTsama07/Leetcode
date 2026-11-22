class Solution:
	def perfectSum(self, arr: list[int], target: int) -> int:
		# code here
		n = len(arr)
		dp = [[-1] * (target + 1) for _ in range(n + 1)]
		def func(i: int, j: int)-> int: #i-> ith num, j-> rem target
		    if i == 0:
		        return 1 if j==0 else 0
		    if dp[i][j] != -1: return dp[i][j]
		    if arr[i - 1] <= j:
		        dp[i][j] = func(i - 1, j - arr[i - 1]) + func(i - 1, j)
		    else: dp[i][j] = func(i - 1, j)
		    return dp[i][j]
		return func(n, target)


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
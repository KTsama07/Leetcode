class Solution:
	def perfectSum(self, arr: list[int], target: int) -> int:
		# code here
		n = len(arr)
		dp = [[-1] * (target + 1) for _ in range(n + 1)]
		for j in range(target+1):
		    dp[0][j]=0
        for i in range(n+1):
		    dp[i][0]=1
		for i in range(1,n+1):
		    for j in range(0,target+1):
		        if arr[i-1]<=j:
		            dp[i][j]= dp[i-1][j-arr[i-1]] + dp[i-1][j]
		        else:
		            dp[i][j]= dp[i-1][j]
		return dp[i][j]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution:
    def wordBreak(self, s: str, wordDict: list[str]) -> bool:
        wordSet = set(wordDict)
        dp = [False] * (len(s)+1) # dp[i] -> if s[0:i] can be segmented
        dp[0] = True
        for r in range(1,len(s)+1):
            for l in range(r):
                if dp[l] and s[l:r] in wordSet:
                    dp[r] = True
                    break
        return dp[-1]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
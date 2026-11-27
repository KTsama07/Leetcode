class Solution:
    def wordBreak(self, s: str, wordDict: list[str]) -> bool:
        wordSet = set(wordDict)
        dp = [None] * (len(s)+1) # dp[i] -> if s[0:i] can be segmented
        def canBreak(st: int) -> bool:
            if st == len(s): return True
            if dp[st] != None: return dp[st]
            for end in range(st+1,len(s)+1):
                if s[st:end] in wordSet and canBreak(end):
                    dp[st] = True
                    return dp[st]
            dp[st] = False
            return dp[st]
        return canBreak(0)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
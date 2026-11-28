class Solution:
    def wordBreak(self, s: str, wordDict: list[str]) -> list[str]:
        wordSet = set(wordDict)
        n = len(s)
        dp = [None] * (n+1)
        def func(start: int)-> bool:
            if start == n: 
                dp[n] = True
                return True
            if dp[start] is not None: 
                return dp[start]
            for end in range(start+1,n+1):
                if s[start:end] in wordSet and func(end):
                    dp[start] = True
                    return dp[start]
            dp[start] = False
            return False
        if not func(0): 
            return []
        ans = []
        def formstring(i: int, path: list[str])->None: 
            # adds words to answer string from index i to n-1
            if i==n : 
                ans.append(" ".join(path))
                return 
            for k in range(i+1,n+1):
                word = s[i:k]
                if word in wordSet and func(k):
                    path.append(word)
                    formstring(k,path)
                    path.pop()
            return
        formstring(0,[])
        return ans


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
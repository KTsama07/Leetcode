class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        if n==1 or k ==1:
            return 0
        mid = pow(2, n-2)
        if k<= mid:
            return self.kthGrammar(n-1,k)
        else:
            return 1 - self.kthGrammar(n-1, k-mid)
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
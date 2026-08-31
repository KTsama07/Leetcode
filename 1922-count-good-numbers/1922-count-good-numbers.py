class Solution:
    def countGoodNumbers(self, n: int) -> int:
        M = 1000000007
        a = 5*4
        ans = 1
        if n%2 ==1:
            rem = 5
        else: rem = 1
        m = n//2
        while m > 0:
            if m % 2==1:
                ans = ans*a % M
            a = a*a % M
            m = m//2
        return ans*rem % M

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
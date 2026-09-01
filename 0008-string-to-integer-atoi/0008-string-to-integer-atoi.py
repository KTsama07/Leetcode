class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        if not s:
            return 0
        INT_MAX = 2147483647
        INT_MIN = -2147483648
        sign = -1 if s[0] == '-' else 1
        if s[0] in '+-':
            s = s[1:]
        def num(i: int, ans :int)-> int:
            if i == len(s):
                return sign * ans
            digit = ord(s[i]) - ord('0')
            if digit < 0 or digit > 9:
                return sign * ans
            if ans > INT_MAX//10 or (ans == INT_MAX//10 and digit > 7):
                return INT_MAX if sign == 1 else INT_MIN
            return num(i+1,ans * 10 + digit)
        return num(0,0)
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
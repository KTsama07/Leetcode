class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s)==Counter(t)
        # mp_s , mp_t={},{}
        # if len(s) != len(t):
        #     return False
        # for c in s:
        #     if mp_s.get(c,0)==0:
        #         mp_s[c]=1
        #         continue
        #     mp_s[c]+=1
        # for c in t:
        #     if mp_t.get(c,0)==0:
        #         mp_t[c]=1
        #         continue
        #     mp_t[c]+=1
        # return mp_s==mp_t

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
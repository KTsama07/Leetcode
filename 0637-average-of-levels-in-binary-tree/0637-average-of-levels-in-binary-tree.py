# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: TreeNode | None) -> list[float]:
        if not root: return 0
        q = deque()
        q.append(root)
        ans=[]
        while q:
            lvls = 0
            l = len(q) 
            for _ in range(l):
                node = q.popleft()
                lvls += node.val
                if node.left: q.append(node.left)
                if node.right: q.append(node.right)
            ans.append(lvls/l)
        return ans
        

        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
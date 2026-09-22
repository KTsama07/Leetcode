# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfsHeight(self, node: TreeNode | None) -> int:
        if node==None : return 0
        lh = self.dfsHeight(node.left)
        if(lh==-1): return -1
        rh = self.dfsHeight(node.right)
        if(rh==-1): return -1
        if(abs(lh-rh)>1): return -1
        return max(lh,rh)+1
    def isBalanced(self, root: TreeNode | None) -> bool:
        return self.dfsHeight(root) != -1

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: TreeNode | None) -> int:
        if not root: return 0
        if not root.left and not root.right: 
            return 1
        lh = self.minDepth(root.left)
        rh = self.minDepth(root.right)
        if lh == 0 or rh == 0 : return 1+max(lh,rh)
        else: return 1+min(lh,rh)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
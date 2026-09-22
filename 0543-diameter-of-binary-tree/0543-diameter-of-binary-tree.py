# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, node: TreeNode | None, maxi: list[int]) -> int:
        if node==None: return 0;
        lh = self.dfs(node.left,maxi)
        rh = self.dfs(node.right,maxi)
        maxi[0] = max(maxi[0],lh+rh)
        return 1+max(lh,rh)

    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        maxi = [0]
        self.dfs(root,maxi)
        return maxi[0]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
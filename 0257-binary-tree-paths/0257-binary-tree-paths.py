# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: TreeNode | None) -> list[str]:
        ans = []
        def func(node: TreeNode,path: str) -> None:
            if not node: return
            path_u = path + str(node.val)
            if not node.left and not node.right: 
                ans.append(path_u)
                return
            path_u += '->'
            func(node.left,path_u)
            func(node.right, path_u)
        func(root,"")
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
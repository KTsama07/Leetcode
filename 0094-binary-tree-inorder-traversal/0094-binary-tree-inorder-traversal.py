# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorder(self,root,arr):
        if root==None:
            return
        self.inorder(root.left,arr)
        arr.append(root.val)
        self.inorder(root.right,arr)
        return
        
    def inorderTraversal(self, root: TreeNode | None) -> list[int]:
        result=[]
        self.inorder(root,result)
        return result
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
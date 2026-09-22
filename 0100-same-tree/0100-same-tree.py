# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorder(self, t: TreeNode | None, ans: list[int]) -> list[int]:
        if t==None: return
        ans.append(t.val)
        if t.left: self.preorder(t.left,ans)
        else: ans.append(None)
        if t.right: self.preorder(t.right,ans)
        else: ans.append(None)
        return

    def isSameTree(self, p: TreeNode | None, q: TreeNode | None) -> bool:
        #preorder traversal
        plist,qlist = [],[]
        self.preorder(p,plist)
        self.preorder(q,qlist)
        return (plist==qlist)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
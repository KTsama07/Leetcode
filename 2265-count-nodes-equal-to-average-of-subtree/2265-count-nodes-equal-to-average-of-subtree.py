# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfSubtree(self, root: TreeNode) -> int:
        self.count = 0
        def dfs(node): 
            if not node:
                return 0 , 0 
            left_sum , left_count = dfs(node.left) #get total & count using BFS on left subtree
            right_sum , right_count = dfs(node.right) #get total & count using BFS on right subtree

            total_sum = node.val + left_sum + right_sum
            total_count = 1 + left_count + right_count

            average = total_sum//total_count #calculate avg
             
            if average == node.val:
                self.count += 1  #increase counter by 1 

            return total_sum , total_count

        dfs(root) #use dfs on root node
        return self.count
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
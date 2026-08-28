# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        curr1 = l1
        curr2 = l2
        ans = []
        carry = 0
        while curr1 and curr2:
            sum_p = curr1.val + curr2.val + carry
            if sum_p > 9:
                sum_p %= 10
                carry = 1
            else:
                carry = 0
            ans.append(ListNode(sum_p))
            curr1 = curr1.next
            curr2 = curr2.next
        while curr1:
            node_1 = curr1.val + carry
            if node_1 > 9:
                node_1 %= 10
                carry = 1
            else: 
                carry = 0
            ans.append(ListNode(node_1))
            curr1 = curr1.next
        while curr2:
            node_2 = curr2.val + carry
            if node_2 > 9:
                node_2 %= 10
                carry = 1
            else: 
                carry = 0
            ans.append(ListNode(node_2))
            curr2 = curr2.next
        if carry:
            ans.append(ListNode(carry))
        curr = ans[0]
        for i in range(1,len(ans)):
            curr.next = ans[i]
            curr = curr.next
        return ans[0]
            


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
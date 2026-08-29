# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def findMiddle(self, node: ListNode):
        slow = node
        fast = node.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        return slow
    
    def mergeTwoList(self, leftHead: ListNode , rightHead: ListNode):
        dummy = ListNode(0)
        tail = dummy
        left = leftHead
        right = rightHead
        while left and right:
            if left.val <= right.val:
                tail.next = left
                left = left.next
            else:
                tail.next = right
                right = right.next
            tail = tail.next
        if left:
            tail.next = left
        else:
            tail.next = right
        return dummy.next  

    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None or head.next == None:
            return head
        middle = self.findMiddle(head)
        right = middle.next
        middle.next = None
        left = head
        leftHead = self.sortList(left)
        rightHead = self.sortList(right)
        return self.mergeTwoList(leftHead,rightHead)
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
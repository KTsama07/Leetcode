# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head:
            return None
        l = []
        curr = head
        length = 0
        while curr:
            l.append(curr)
            curr = curr.next
            length += 1
        k = k % length
        if k == 0 :
            return head
        new_head = l[length- k]
        l[length - 1].next = l[0]
        l[length-k-1].next= None
        head = new_head
        return head



# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
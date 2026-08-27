# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head:
            return 
        curr = head
        prev = None
        cnt = 1
        while curr.next:
            prev = curr
            curr = curr.next
            cnt += 1
        k = k%cnt
        if k==0:
            return head
        while k != 0:
            curr.next = head
            head = curr
            prev.next = None
            prev_new = head
            while prev_new.next.next:
                prev_new = prev_new.next
            curr = prev
            prev = prev_new
            k -= 1
        return head



# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        if left == right:
            return head
        ln = None
        prev = None
        temp = head
        count = 1
        if left != 1:
            while count < left:
                prev = temp
                temp = temp.next
                count += 1
        first= temp
        ln = prev
        while left <= count <= right:
            front = temp.next
            temp.next = prev
            prev = temp
            temp = front
            count += 1
        first.next = temp
        if ln: 
            ln.next = prev
        else :
            head = prev
        return head


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
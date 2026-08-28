# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        first = headA
        second = headB
        while first != second:
            first = first.next if first else headB
            second = second.next if second else headA
        return first
        # x = headA
        # y = headB
        # l1 = []
        # l2 = []
        # while x or y:
        #     if x : 
        #         l1.append(x)
        #         x = x.next
        #     if y : 
        #         l2.append(y)
        #         y = y.next
        # s2 = set(l2)
        # result = [item for item in l1 if item in s2]
        # if result:
        #     return result[0]
        # else:
        #     return None

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
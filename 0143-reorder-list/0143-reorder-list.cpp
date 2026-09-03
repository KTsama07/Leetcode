/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while ( fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* mid = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = mid;
        while(curr != nullptr){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        ListNode* curr2 = prev;
        ListNode* prev2 = nullptr;
        ListNode* curr1 = head;
        ListNode* prev1 = nullptr;
        while(curr1 != nullptr && curr2 != nullptr){
            prev1 = curr1;
            curr1 = curr1->next;
            prev2 = curr2;
            curr2 = curr2->next;
            prev1->next = prev2;
            prev2->next = curr1;
        }
        return;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
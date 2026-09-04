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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr){
            return head;
        }
        int cnt = 0;
        ListNode* chk = head;
        //check whether reversal is possible for remaining
        while (cnt < k && chk != nullptr){ 
            cnt++;
            chk = chk->next;
        }
        if(cnt < k){
            return head;
        }
        ListNode* prev = nullptr;
        ListNode* curr = head;
        //reversing the grp of k-nodes
        while(cnt > 0 && curr != nullptr){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
            cnt--;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
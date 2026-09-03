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
        if(head == nullptr){
            return;
        }
        ListNode* curr = head;
        vector<ListNode*> na;
        while(curr != nullptr){
            na.push_back(curr);
            curr = curr->next;
        }
        int n = na.size();
        int i = 0;
        for(; i < n/2 ; i++){
            na[i]->next = na[n-1-i];
            na[n-1-i]->next = na[i+1];
        }
        na[i]->next = nullptr;
        return;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
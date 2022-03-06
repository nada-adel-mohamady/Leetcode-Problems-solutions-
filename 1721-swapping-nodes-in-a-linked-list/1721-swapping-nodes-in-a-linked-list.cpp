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
    ListNode* swapNodes(ListNode* head, int k) {
        int numberOfNodes = 0;
        ListNode* tmp = head;
        while(tmp) {
            tmp = tmp->next;
            numberOfNodes++;
        }
        int k2 = numberOfNodes - k;
        ListNode* front = head;
        ListNode* back = head;
        while(--k) {
            front = front->next;
        }
        
        while(k2--) {
            back = back->next;
        }
        int swap = front->val;
        front->val = back->val;
        back->val = swap;
        return head;
    }
};
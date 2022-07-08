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
        int i;
        int nodesCount = 0;
        ListNode* node = head;
        while(node) {
            node = node->next;
            nodesCount++;
        }
        ListNode* curr = head;
        ListNode* tmpHead = head;
        ListNode* prev = head;
        ListNode* nxt = head;
        ListNode* prevTail = nullptr;
        bool first = true;
        int inx = 0;
        while(curr && inx+k <= nodesCount) {
            i = 0;
            if(!first)
                tmpHead = curr;
            inx += k;
            while(i < k) {
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
                i++;
            }
             
           if(first) {
                first = false;
                head = prev;
            }
           
            tmpHead->next = curr;
            if(prevTail) {
                prevTail->next = prev;
            }
            prevTail = tmpHead;
        }
        return head;
    }
};
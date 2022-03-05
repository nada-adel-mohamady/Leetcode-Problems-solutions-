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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* nextNode;
        while(head) {
            nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* reversedNode1 = reverse(l1);
        ListNode* reversedNode2 = reverse(l2);
        int curr;
        int reminder=0;
        ListNode* currNode = new ListNode();
        ListNode* head = currNode;
        
        while(reversedNode1 || reversedNode2 || reminder) {
            curr = 0;
            if(reversedNode1) {
                curr += reversedNode1->val;
                reversedNode1 = reversedNode1->next;
            }
            if(reversedNode2) {
                curr += reversedNode2->val;
                reversedNode2 = reversedNode2->next;
            }
           curr += reminder;
            if(curr>10) {
                curr = curr % 10;
                reminder = 1;
            }
            else if(curr==10) {
                curr = 0;
                reminder = 1;
            }
            else {
                reminder = 0;
            }
            currNode->next = new ListNode(curr);
            currNode = currNode->next;
      
        }
        
        return reverse(head->next);
    }
};
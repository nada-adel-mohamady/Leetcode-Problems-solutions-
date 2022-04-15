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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return head;
        ListNode*prev, *nxt, *curr;
        ListNode*dummyHead=new ListNode(-101);
        dummyHead->next=head;
        ListNode*tmp=dummyHead;
        prev=dummyHead;
        curr=prev->next;
        nxt=curr->next;
        while(nxt!=nullptr){
            if(curr->val!=prev->val && curr->val!=nxt->val){
                tmp->next=curr;
                tmp=tmp->next;
            }
            prev=prev->next;
            curr=curr->next;
            nxt=nxt->next;
        }
        if(prev->val==curr->val)
              tmp->next=nxt;
        else if(prev->val!=curr->val)
            tmp->next=curr;
        return dummyHead->next;
    }
};
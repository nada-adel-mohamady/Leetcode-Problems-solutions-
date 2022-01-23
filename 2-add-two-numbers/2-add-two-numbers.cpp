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
    void calc(int &sum, int &reminder, ListNode*res){
         if(sum>=10){
                res->val=sum%10;
                if(sum<20)
                    reminder=1;
                else 
                    reminder=2;
            }
            else{
                reminder=0;
                res->val=sum;
            }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head=new ListNode();
        ListNode*res=head;
        ListNode*longer;
        int sum, reminder=0;
        while(l1!=nullptr && l2!=nullptr){ 
             
            sum=l1->val+l2->val+reminder;
            calc(sum, reminder, res);
            l1=l1->next;
            l2=l2->next;
            if(!l1){
                longer=l2;
                break;
            }
            if(!l2){
                longer=l1;
                break;
            }
            res->next=new ListNode();
            res=res->next;
        }
        while(longer!=nullptr){
            res->next=new ListNode();
            res=res->next;
            sum=longer->val+reminder;
            calc(sum, reminder, res);
            longer=longer->next;
            if(!longer)break;
        }
    
        if(reminder){
            res->next=new ListNode();
            res=res->next;
            res->val=reminder;
        }

        return head;
    }
};
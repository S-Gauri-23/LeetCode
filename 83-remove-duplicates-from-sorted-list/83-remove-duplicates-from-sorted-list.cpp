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
        ListNode *p = head;
        ListNode *q = NULL;
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        q = p;
        p = p->next;
        while(p!=NULL){   
            if(q->val == p->val){
                q->next = p->next;
            }
            else{
                 q = p;
            }
            p = p->next;
        }
        return head;
    }
};
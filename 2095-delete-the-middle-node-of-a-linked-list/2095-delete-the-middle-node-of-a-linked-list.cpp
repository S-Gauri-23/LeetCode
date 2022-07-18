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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* p = head;
        ListNode* q = NULL;
        int n = 0;
        if(head == NULL || head->next == NULL){
            return head=NULL;
        }
        
        while(p!=NULL){
            n++;
            p = p->next;
        }
        p = head;
        for(int i=1 ; i<=n/2; i++){
            q = p;
            p = p->next;
        }
            
        q->next = p->next;
        return head;
    }
};
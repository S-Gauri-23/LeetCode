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
    int count(ListNode* head){
        ListNode* p = head;
        int n = 0;
        while(p != NULL){
            n++;
            p = p->next;
        }
        return n;
    }
    
    ListNode* deleteMiddle(ListNode* head) {
       
        int n = count(head);
        
        if(head == NULL || head->next == NULL){
            return head = NULL;
        }
        
        ListNode* p = head;
        ListNode* q = NULL;
        
        for(int i=0 ; i<n/2; i++){
            q = p;
            p = p->next;
        }
            
        q->next = p->next;
        return head;
    }
};
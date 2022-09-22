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
        ListNode *p = head;
        int count = 0;
        
        while(p!=NULL){
            count++;
            p = p->next;
        }
        return count;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL){
            return NULL;
        }
        
        ListNode* p = head;
        int tot = count(head);
        int num = tot-n;
        
        if(num == 0){
            head = head->next;
            return head;
        }
        
        
        for(int i=0; i<num-1; i++){
            p = p->next;
        }
        p->next = p->next->next;
        return head;
    }
};

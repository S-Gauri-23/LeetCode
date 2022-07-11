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
    ListNode* middleNode(ListNode* head) {
        ListNode* p = head;
        int n=0;
        while(p!=NULL){
            n++;
            p=p->next;
        }
        p=head;
        if(n%2==0){
            for(int i=1; i<=(n-1)/2; i++){
                p = p->next;
            }
            p = p->next;
        }
        
        else{
            for(int i=1; i<=(n-1)/2; i++)
            {
                p = p->next;
            }    
        }
        head = p;
        return head;
    }
};
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
        int count = 0;
        while(p!=NULL){
            count++;
            p = p->next;
        }
        return count;
    }
    
    int getDecimalValue(ListNode* head) {
        ListNode* p = head;
        int n = count(head);
        int sum = 0;
        while(p!=NULL){
            sum += p->val * pow(2, n-1);
            n--;
            p = p->next;
        }
        return sum;
    }
};
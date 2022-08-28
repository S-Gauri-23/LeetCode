/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* stating_point = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
            //collision node is found i.e. cycle detected
            if(slow == fast){
                while(slow != stating_point){
                    stating_point = stating_point->next;
                    slow = slow->next;
                }
                return stating_point;
            }
        }
        return NULL;
    }
};
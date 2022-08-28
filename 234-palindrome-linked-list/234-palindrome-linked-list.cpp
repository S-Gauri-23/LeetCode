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
    
    ListNode* reverseLinkedList(ListNode* head){
        ListNode *prev = NULL;
        ListNode *next = NULL;
        
        while(head != NULL){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        // to find the middle of the linked list
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseLinkedList(slow->next);
        slow = slow->next;
        
        while(slow != NULL){
            if(head->val != slow->val)
                return false;
            
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};
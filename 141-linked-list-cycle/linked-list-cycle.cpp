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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head; 
        while(fast!=NULL && fast->next!=NULL)
        {
            //Fast pointer will move twice the speed of slow pointer
            // so if the List is circular then a point would come when 
            //Slow and fast will meet each other just like that in a circiular track
            fast=fast->next->next; 
            slow=slow->next;

            if(slow==fast)
            {
                return true;
            }

        }
        return false;
        
    }
};
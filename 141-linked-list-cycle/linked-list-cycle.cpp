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
        if(head == NULL || head -> next== NULL)
        return 0;

        ListNode* fast = head;
        ListNode* slow = head;

        while(slow != NULL && fast != NULL)
        {
            fast = fast -> next;
            if(fast != NULL)
            {
                fast = fast -> next;
            }
            slow = slow -> next;

            if(fast == slow)
            return 1;
        }
        return 0;
    }
};
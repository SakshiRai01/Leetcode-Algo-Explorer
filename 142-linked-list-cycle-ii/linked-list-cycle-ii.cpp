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
        if(head == NULL || head -> next == NULL)
        return NULL;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* temp = NULL;

        while(fast != NULL && slow != NULL)
        {
            slow = slow -> next;
            fast = fast -> next;
            if(fast != NULL)
            {
                fast = fast -> next;
            }

            if(fast == slow)
            {
                temp = fast;
                break;
            }
        }

        if(temp == NULL)
        return NULL;

        slow = head;

        while(slow != temp)
        {
            temp = temp -> next;
            slow = slow -> next;
        }

        return temp;

    }
};
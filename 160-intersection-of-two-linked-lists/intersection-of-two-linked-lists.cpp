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
int length(ListNode* l)
{
    int count = 0;
    while(l)
    {
        count++;
        l = l -> next;
    }
    return count;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
        return NULL;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int lA = length(temp1);
        int lB = length(temp2);

        if(lA > lB)
        {
            while(lA > lB)
            {
                lA--;
                temp1 = temp1 -> next;
            }
        }

        else if(lB > lA)
        {
            while(lB > lA)
            {
                lB--;
                temp2 = temp2 -> next;
            }
        }

        while(temp1 && temp2)
        {
            if(temp1 == temp2)
            {
                return temp1;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }

        return NULL;
    }
};
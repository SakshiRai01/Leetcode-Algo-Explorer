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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* temp1 = list1;
        ListNode* t = list1;
        ListNode* temp2 = list2;
        int i;

        for(i=0 ; i<a-1 ;i++)
        {
            temp1 = temp1->next;
        }

        for(int j=0 ; j<=b ; j++)
        {
            t = t->next;
        }

        temp1->next = list2;

        while(temp2->next!=NULL)
        {
            temp2 = temp2->next;
        }

        temp2->next = t;
        
        return list1;
    }
};
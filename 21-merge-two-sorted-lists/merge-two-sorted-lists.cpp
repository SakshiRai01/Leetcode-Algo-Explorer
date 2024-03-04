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
    ListNode* solve(ListNode* f, ListNode* s)
    {
        if( f -> next == NULL)
        {
            f -> next = s;
            return f;
        }

        ListNode* curr1 = f;
        ListNode* next1 = curr1 -> next;
        ListNode* curr2 = s;
        ListNode* next2 = curr2 -> next;

        while(next1 != NULL && curr2 != NULL)
        {
            if(curr2 -> val >= curr1 -> val && curr2 -> val <= next1 -> val)
            {
                curr1 -> next = curr2;
                next2 = curr2 -> next;
                curr2 -> next = next1;

                curr1 = curr2;
                curr2 = next2;
            }

            else
            {
                curr1 = next1;
                next1 = next1 -> next;

                if(next1 == NULL)
                {
                    curr1 -> next = curr2;
                    return f;
                }
            }
        }
        return f;
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
        return list2;
        if(list2 == NULL)
        return list1;
        ListNode* l = NULL;

        if(list1 -> val <= list2 -> val)
        l = solve(list1 , list2);
        else
        l = solve(list2 , list1);

        return l;
    }
};
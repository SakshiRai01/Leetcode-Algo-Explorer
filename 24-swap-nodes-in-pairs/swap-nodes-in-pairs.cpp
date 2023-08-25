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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL)
        return NULL;

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp = NULL;

        int t = 0;
        while(curr!=NULL && t<2)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            t++;
        }
        head->next = swapPairs(temp);
        return prev;

    }
};
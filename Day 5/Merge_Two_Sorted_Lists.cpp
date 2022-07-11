class Solution {
public:

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans;
        ans = new ListNode(NULL);
        ListNode* temp = ans;
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val <= list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else if (list2->val < list1->val)
            {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if (list1) temp->next = list1;
        if (list2) temp->next = list2;
        return ans->next;
    }
};
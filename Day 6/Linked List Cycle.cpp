class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;
        while (head->val != 100001)
        {
            head->val = 100001;
            if (head->next != NULL)
            {
                if (head->next->val == 100001)
                {
                    return true;
                }
            }
            else return false;
            head = head->next;
        }
        return false;
    }
};
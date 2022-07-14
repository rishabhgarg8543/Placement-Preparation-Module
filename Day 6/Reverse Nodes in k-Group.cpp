class Solution {
public:
    int len(ListNode* head)
    {
        int cnt = 0;
        while (head != NULL)
        {
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy, *curr = head, *temp = NULL;
        int count = len(head);
        while (count >= k)
        {
            int cnt = 0;
            ListNode* prev2 = prev, *start = curr;
            while (cnt < k)
            {
                cnt++;
                temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            start->next = curr;
            prev2->next = prev;
            prev = start;
            count = count - k;
        }
        return dummy->next;
    }
};

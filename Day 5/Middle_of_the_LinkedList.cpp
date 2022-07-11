class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode* curr = head;
        while (head != NULL)
        {
            cnt++;
            head = head->next;
        }
        // cout<<cnt;
        int t;

        t = cnt / 2;
        int p = 0;
        while (p < t)
        {
            curr = curr->next;
            p++;
        }
        return curr;;

    }
};
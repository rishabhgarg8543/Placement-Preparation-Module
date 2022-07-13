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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) return NULL;


        int n = len(head);
        if (head->next == NULL || k == 0 || k == n || k % n == 0) return head;
        int z = k % n;
        int c = n - z - 1;
        ListNode* temp;
        temp = head;
        while (c--)
        {
            temp = temp->next;
        }
        ListNode* temp2;
        temp2 = temp->next;
        temp->next = NULL;
        ListNode* p;
        p = temp2;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = head;
        return temp2;

    }
};
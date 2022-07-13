class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return NULL;
        ListNode* s = head;
        ListNode* f = head;
        ListNode* e = head;
        while (f->next != NULL && f->next->next != NULL)
        {
            s = s->next;
            f = f->next->next;
            if (s == f)
            {
                while (e != s)
                {
                    s = s->next;
                    e = e->next;
                }
                return e;
            }
        }
        return NULL;
    }
};
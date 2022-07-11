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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *a = l1, *b = l2, *c = l2;

        int n = len(l1);
        int m = len(l2);
        int x = max(n, m);
        if (n == x)
        {
            while (b->next != NULL)
            {
                b = b->next;
            }
            int p = n - m;
            while (p--)
            {
                ListNode* temp = new ListNode(0);
                b->next = temp;
                b = temp;
            }
        }
        else
        {
            while (a->next != NULL)
            {
                a = a->next;
            }
            int p = m - n;
            while (p--)
            {
                ListNode* temp = new ListNode(0);
                a->next = temp;
                a = temp;
            }
        }
        ListNode* ans = new ListNode(-1);
        ListNode* r = ans;
        int carry = 0;
        while (l2 != NULL)
        {
            cout << l1->val << " " << l2->val << " " << carry << " ";
            int t = l1->val + l2->val + carry;
            carry = 0;
            if (t > 9)
            {
                carry = t / 10;
                t = t % 10;
            }
            cout << t << "\n";
            ListNode* temp = new ListNode(t);
            ans->next = temp;
            ans = temp;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (carry != 0)
        {
            ListNode* temp = new ListNode(carry);
            ans->next = temp;
            ans = temp;
        }
        return r->next;
    }
};
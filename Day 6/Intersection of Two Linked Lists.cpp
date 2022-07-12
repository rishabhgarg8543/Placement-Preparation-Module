/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = len(headA), m = len(headB);
        int x = max(n, m);
        if (x == m)
        {
            int p = m - n;
            while (p--)
            {
                headB = headB->next;
            }
        }
        else {
            int p = n - m;
            while (p--)
            {
                headA = headA->next;
            }
        }
        while (headA != NULL || headB != NULL)
        {
            if (headA == headB)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};




//  approach 2
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA, *b = headB;
        while (a != b)
        {
            if (a == NULL) a = headA;
            else a = a->next;
            if (b == NULL) b = headB;
            else b = b->next;
        }
        return a;
    }
};
class Solution {
public:
    ListNode* mid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* rev(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp;
        while (curr != NULL)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* middle = mid(head);
        ListNode* temp = middle->next;
        middle->next = rev(temp);
        ListNode* l1 = head;
        ListNode* l2 = middle->next;
        while (l2 != NULL)
        {
            if (l1->val != l2->val) return false;
            l1 = l1->next;
            l2 = l2->next;
        }
        return true;
    }
};
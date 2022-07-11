//METHOD 1
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
	ListNode* removeNthFromEnd(ListNode* head, int m) {
		int n = len(head) - m;
		cout << n;
		if (n == 0)
		{
			return head->next;
		}
		ListNode* prev = NULL, *curr = head;
		int cnt = 0;
		while (cnt < n)
		{
			prev = curr;
			curr = curr->next;
			cnt++;
		}
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
		return head;
	}
};

// Method 2
class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *temp = head, *l1 = head, *l2 = head;
		for (int i = 0; i < n; i++)
		{
			l1 = l1->next;
		}
		if (l1 == NULL)
		{
			ListNode* temp = head->next;
			delete head;
			return temp;
		}
		while (l1->next != NULL)
		{
			l1 = l1->next;
			l2 = l2->next;
		}
		l2->next = l2->next->next;
		return head;
	}
};
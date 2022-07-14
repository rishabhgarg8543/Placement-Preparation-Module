void insert(Node* &head, Node* &tail, int d)
{
    Node* newNode = new Node(d);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while (temp != NULL)
        {
            insert(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }
        Node* p = head;
        Node* q = cloneHead;
        while (q != NULL && p != NULL)
        {
            Node* a = p->next;
            p->next = q;
            p = a;
            a = q->next;
            q->next = p;
            q = a;
        }
        Node* t = head;
        while (t != NULL)
        {
            if (t->random != NULL)
            {
                t->next->random = t->random->next;
            }

            t = t->next->next;
        }
        p = head;
        q = cloneHead;
        while (p != NULL && q != NULL )
        {
            p->next = q->next;
            p = p->next;
            if (p != NULL)
                q->next = p->next;
            q = q->next;
        }
        return cloneHead;
    }
};

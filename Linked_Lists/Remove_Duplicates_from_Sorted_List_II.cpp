/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* temp=new ListNode(-1);
    temp->next=A;
    ListNode* p=temp ;
    while(p->next)
    {
        ListNode* n=p->next ;
        while(n->next && n->val==n->next->val)
        {
            n=n->next;
        }
        if(p->next!=n)
        {
            p->next=n->next;
        }
        else
        {
            p=n;
        }
    }
    return temp->next;
}


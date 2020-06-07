/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A==NULL)
    {
        return NULL ;
    }
    if(A->next==NULL)
    {
        return A ;
    }
    ListNode* p=A;
    int a ;
    int b ;
    ListNode* c ;
    while(A!=NULL and A->next!=NULL)
    {
        a=A->val ;
        b=A->next->val ;
        c=A->next->next ;
        A->val=b ;
        A->next->val=a ;
      //  A->next->next=c ;
        A=A->next ;
        A=A->next ;
    }
    return p ;
}


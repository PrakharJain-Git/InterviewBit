/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* current=A ;
    ListNode* prev=NULL ;
    ListNode* next ;
    if(A->next==NULL && B==1)
    {
        return A->next ;
    }
    ListNode* p=A ;
    int m=0 ;
    while(p->next!=NULL)
    {
        m++ ;
        p=p->next ;
    }
    if(B>=m)
    {
        return A->next ;
    }
    while(current!=NULL)
    {
        next=current->next ;
        current->next=prev ;
        prev=current ;
        current=next ;
    }
    int i=1;
    ListNode* ans=new ListNode(-1) ;
    ListNode* n=ans ;
    while(i<B)
    {
        ans->next=prev ;
        prev=prev->next ;
        ans=ans->next ;
        i++ ;
    }
    ans->next=prev->next ;
    current=n->next ;
    prev=NULL ;
    while(current!=NULL)
    {
        next=current->next ;
        current->next=prev ;
        prev=current ;
        current=next ;
    }
    return prev ;
}


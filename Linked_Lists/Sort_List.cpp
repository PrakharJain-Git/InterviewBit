/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* mergesort(ListNode* L,ListNode* R)
{
    if(L==NULL)
    {
        return L ;
    }
    if(R==NULL)
    {
        return R ;
    }
    ListNode* ans ;
    if(L->val<R->val)
    {
        ans=L ;
        L=L->next ;
    }
    else
    {
        ans=R ;
        R=R->next ;
    }
    ListNode* p=ans ;
    while(L!=NULL && R!=NULL)
    {
        if(L->val<R->val)
        {
            ans->next=L ;
            L=L->next ;
        }
        else
        {
            ans->next=R ;
            R=R->next ;
        }
        ans=ans->next ;
    }
    while(L!=NULL)
    {
        ans->next=L ;
        L=L->next ;
        ans=ans->next ;
    }
    while(R!=NULL)
    {
        ans->next=R ;
        R=R->next ;
        ans=ans->next ;
    }
    return p ;
}
ListNode* Solution::sortList(ListNode* A) {
    if(A==NULL || A->next==NULL)
    {
        return A ;
    }
    ListNode* temp=A ;
    ListNode* L=A ;
    ListNode* R=A ;
    while(R!=NULL && R->next!=NULL)
    {
        temp=L ;
        L=L->next ;
        R=R->next->next ;
    }
    temp->next=NULL ;
    ListNode* M=sortList(A) ;
    ListNode* N=sortList(L) ;
    return mergesort(M,N) ;
}

 

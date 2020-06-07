/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int i=0,j=0,m=0 ;
    ListNode* C=A ; 
    ListNode* D=A ;
    ListNode* E=A ;
    ListNode* F=A ;
    while(C!=NULL)
    {
        m++ ;
        C=C->next ;
    }
    if(B%m==0 && B>m)
    {
        return A ;
    }
    if(B>m)
    {
        B=B%m ;
    }
    while(m-B>i)
    {
        D=D->next ;
        i++ ;
    }
    while(E->next!=NULL)
    {
        E=E->next ;
    }
    while(i>0)
    {
        i-- ;
        E->next=F ;
        E=E->next ;
        F=F->next ;
    }
    E->next=NULL ;
    return D ;
    
}


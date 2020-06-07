/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int a=0,b=0,c=0,x=0,y=0,z=0 ;
    a=A->val ;
    b=B->val ;
    y=a+b+c ;
    if(y>9)
    {
        c=1 ;
    }
    A=A->next ;
    B=B->next ;
    ListNode* C=new ListNode(y%10) ;
    ListNode* D=C ;
    while(A!=NULL || B!=NULL)
    {
        if(A!=NULL)
        {
            a=A->val ;
            A=A->next ;
        }
        else 
        {
            a=0 ;
        }
        if(B!=NULL)
        {
            b=B->val ;
            B=B->next ;
        }
        else
        {
            b=0 ;
        }
        y=a+b+c ;
        if(y>9)
        {
            c=1 ;
        }
        else
        {
            c=0 ;
        }
        ListNode* temp=new ListNode(y%10) ;
        C->next=temp ;
        C=C->next ;
    }
    if(c==1)
    {
        ListNode* temp=new ListNode(1) ;
        C->next=temp ;
        C=C->next ;
    }
    C->next=NULL ;
    return D ;
}


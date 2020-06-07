/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* temp=A ;
    int m=0,n=0,i=0,j=0,k=0 ;
    while(temp!=NULL)
    {
        m++ ;
        temp=temp->next ;
    }
    temp=B ;
    while(temp!=NULL)
    {
        n++ ;
        temp=temp->next ;
    }
    ListNode* ans=new ListNode(-1) ;
    ans->next=A ;
    ListNode* p=ans ;
    while(i<m && j<n)
    {
        if(A->val>B->val)
        {
            ans->next=B ;
            B=B->next ;
            j++ ;
        }
        else
        {
            ans->next=A ;
            A=A->next ;
            i++ ;
        }
        ans=ans->next ;
    }
    while(i<m)
    {
        ans->next=A ;
        A=A->next ;
        i++ ;
        ans=ans->next ;
    }
    while(j<n)
    {
        ans->next=B ;
        B=B->next ;
        j++ ;
        ans=ans->next ;
    }
    return p->next ;
}


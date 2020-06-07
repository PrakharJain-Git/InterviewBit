/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* C=A ;
    ListNode* D=A ;
    ListNode* E=new ListNode(-1) ;
    ListNode* G=new ListNode(-1) ;
    ListNode* H=G ;
    ListNode* F=E ;
    while(D!=NULL)
    {
        if(D->val<B)
        {
            E->next=D ;
            E=E->next ;
        }
        else
        {
            G->next=D ;
            G=G->next ;
        }
        D=D->next ;
    }
    G->next=NULL ;
    E->next=H->next ; 
    
    return F->next ;
}


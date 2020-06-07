/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* B=new ListNode(-1) ;
    ListNode* C=B ;
    while(A!=NULL) 
    {
        B=C ;
        while(B->next!=NULL && A->val>B->next->val) 
        {
            B=B->next ;
        }
        if(B->next!=NULL)
        {
            ListNode* temp=B->next ;
            B->next=new ListNode(A->val) ;
            B->next->next=temp ;
        }
        else
        {
            B->next=new ListNode(A->val) ;
        }
        A=A->next ;
    }
    return C->next ;
}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
  
    
    vector<int> B ;
    ListNode* C=A ;
    ListNode* temp=A ;
    int len=0,i ;
    while(C!=NULL)
    {
        B.push_back(C->val) ;
        C=C->next ;
        len++ ;
    }
    for(i=0;i<len/2;i++)
    {
        A->val=B[i] ;
        A=A->next ;
        A->val=B[len-i-1] ;
        A=A->next ;
    }
    if(len%2==1)
    {
        A->val=B[i] ;
    }
    return temp ;
}


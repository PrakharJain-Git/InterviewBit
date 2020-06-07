/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {

    if(B==C)
    return A ;
    vector<int> D ;
    ListNode* temp=A ;
    int len=0 ;
    while(A!=NULL)
    {
        len++ ;
        A=A->next ;
    }
    A=temp ;
    for(int i=0;i<len;i++)
    {
        D.push_back(A->val) ;
        A=A->next ;
    }
    A=temp ;
    reverse(D.begin()+B-1, D.begin()+C) ;
    for(int i=0;i<D.size();i++)
    {
        A->val=D[i] ;
        A=A->next ;
    }
    A=temp ;
    return A ; 
}



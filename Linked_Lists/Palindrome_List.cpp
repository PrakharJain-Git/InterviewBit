/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {

    if(A->next==NULL || A==NULL)
    {
        return 1 ;
    }
    vector<int> B ;
    while(A->next!=NULL)
    {
        B.push_back(A->val) ;
        A=A->next ;
        if(A->next==NULL)
        {
            B.push_back(A->val) ;
        }
    }
    for(int i=0;i<B.size();i++)
    {
        if(B[i]!=B[B.size()-i-1])
        {
            return 0 ;
        }
    }
    return 1 ;
}


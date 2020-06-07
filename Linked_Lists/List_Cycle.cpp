/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
   /* int i=0,flag=0,j=0,k=0 ;
    vector<int> D ;
    while(A!=NULL)
    {
        i++ ;
        D.push_back(A->val) ;
        for(k=0;k<D.size()-1;k++)
        {
            if(D[D.size()-1]==D[k])
            {
                return A ;
            }
        }
        A=A->next ;
    }
    return NULL ;*/
    ListNode* B=A ;
    ListNode* C=A ;
    int flag=0 ;
    while(C!=NULL && C->next!=NULL)
    {
        B=B->next ;
        C=C->next->next ;
        if(B==C)
        {
            flag=1 ;
            break ;
        }
    }
    if(flag==0)
    {
        return NULL ;
    }
    while(A!=B)
    {
        A=A->next ;
        B=B->next ;
    }
    return A ;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


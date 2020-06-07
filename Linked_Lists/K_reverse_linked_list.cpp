/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {

  
    if(B==1)
    {
        return A ;
    }
    ListNode* current=A;
    ListNode* next=NULL;
    ListNode* prev=NULL;
    int count = 0;   
    while(count<B)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }
    if(next!=NULL)
    A->next=reverseList(next,B);
     return prev;
}


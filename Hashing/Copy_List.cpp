/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    RandomListNode*temp = A;
while(temp!=NULL)
{
    RandomListNode* n = new RandomListNode(temp->label);
    
    n->next = temp->next;
    temp->next = n;
    
    temp = n->next;
}
// connecting random pointer
temp = A;
RandomListNode*temp1=A->next;

while(temp!=NULL)
{
    if(temp->random)
    {
        temp1->random = temp->random->next;
    }
    else
    {
        temp1->random =NULL;
    }
 temp=temp1->next;
 if(temp!=NULL)
 {
    temp1=temp->next;
 }
 else
 {
     break;
 }
}
// seperating lists
RandomListNode*l1,*l2,*h1,*h2;
l1 = A;
l2 = A->next;
h1 = A;
h2 = A->next;
while(l1!=NULL)
{
    l1->next = l2->next;
    l1 = l1->next;
    if(l1==NULL)
    {
        break;
    }
    l2->next = l1->next;
    l2 = l2->next;
}
return h2;
}


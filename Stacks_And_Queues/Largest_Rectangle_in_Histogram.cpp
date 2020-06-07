int Solution::largestRectangleArea(vector<int> &A) {

    int len=A.size(),i,j,k,max=0,ans ;
    int C[len],D[len];
    stack<int> B,E;
    if(A.size()==1)
    {
        return A[0];
    }
    for(i=0;i<len;i++)
    {
        if(B.empty())
        {
            C[i]=-1;
        }
        else
        {
            while(!B.empty() && A[B.top()]>=A[i])
            {
                B.pop();
            }
            if(B.empty())
            {
                C[i]=-1;
            }
            else
            {
                C[i]=B.top();
            }
        }
        B.push(i);
    }
    for(i=len-1;i>=0;i--)
    {
        if(E.empty())
        {
            D[i]=len;
        }
        else
        {
            while(!E.empty() && A[E.top()] >= A[i])
            {
                E.pop();
            }
            if(E.empty())
            {
                D[i]=len;
            }
            else
            {
                D[i]=E.top();
            }
        }
        E.push(i);
    }
    for(i=0;i<len;i++)
    {
        ans =(D[i]-C[i]-1)*A[i];
        if(ans>max)
        max=ans ;
    }
    return max;
}


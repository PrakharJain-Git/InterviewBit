int Solution::trap(const vector<int> &A) {
    int len,i,j,k=0,ans=0,max=0 ;
    len=A.size() ;
    stack<int> B ;
    B.push(A[0]) ;
    for(i=0;i<len;i++)
    {
        if(A[i]>max)
        {
            max=A[i] ;
            k=i ;
        }
    }
    for(i=1;i<=k;i++)
    {
        if(A[i]<B.top())
        {
            ans=ans+B.top()-A[i] ;
        }
        else
        {
            B.pop() ;
            B.push(A[i]) ;
        }
    }
    B.pop() ;
    B.push(A[len-1]) ;
    for(j=len-2;j>=k;j--)
    {
        if(A[j]<B.top())
        {
            ans=ans+B.top()-A[j] ;
        }
        else
        {
            B.pop() ;
            B.push(A[j]) ;
        }
    }
    return ans ;
}


int Solution::candy(vector<int> &A) {
    int len,i,j,k=0,ans=0,flag=0,count=0 ;
    len=A.size() ;
    if(len==0)
    {
        return 0 ;
    }
    vector<int> B,C ;
    for(i=0;i<len;i++)
    {
        B.push_back(1) ;
        C.push_back(1) ;
    }
    for(i=1;i<len;i++)
    {
        if(A[i]>A[i-1])
        {
            B[i]=B[i-1]+1 ;
        }
    }
    for(i=len-2;i>=0;i--)
    {
        if(A[i]>A[i+1])
        {
            C[i]=C[i+1]+1 ;
        }
    }
    for(i=0;i<len;i++)
    {
        if(C[i]>B[i])
        {
            B[i]=C[i] ;
        }
        ans=ans+B[i] ;
    }
    return ans ;
}


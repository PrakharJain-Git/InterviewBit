vector<int> Solution::subUnsort(vector<int> &A) {
    int len,i,j=0,k ;
    vector<int> B ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        B.push_back(A[i]) ;
    }
    sort(B.begin(),B.end()) ;
    for(i=0;i<len;i++)
    {
        if(A[i]==B[i])
        {
            j++ ;
        }
    }
    if(j==len)
    {
        B.clear() ;
        B.push_back(-1) ;
        return B ;
    }
    for(i=0;i<len;i++)
    {
        if(A[i]!=B[i])
        {
            j=i ;
            break ;
        }
    }
    for (i=len-1;i>=0;i--)
    {
        if(A[i]!=B[i])
        {
            k=i ;
            break ;
        }
    }
    B.clear() ;
    B.push_back(j) ;
    B.push_back(k) ;
    return B ;
}


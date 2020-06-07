vector<int> Solution::plusOne(vector<int> &A) {
    long long int len,i,j,k,num=0 ;
    vector<int> B,C ;
    len=A.size() ;
    A[len-1]=A[len-1]+1 ;
    i=len-1 ;
    while(A[i]==10 && i>0)
    {
        A[i]=0 ;
        i=i-1 ;
        A[i]=A[i]+1 ;
    }
    if (A[0]==10)
    {
        B.push_back(1) ;
        for(j=1;j<=len;j++)
        {
            B.push_back(0) ;
        }
        return B ;
    }
    else if (A[0]==0)
    {
        i=0 ;
        while(A[i]==0)
        {
            i++ ;    
        }
        for (j=0;j<len-i;j++)
        {
            C.push_back(A[j+i]) ;
        }
        return C ;
    }
    else
    {
        return A ;
    }
    
}


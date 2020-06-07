int Solution::strStr(const string A, const string B) {
    int m,n,i=0,j=0,k=0 ;
    m=A.size() ;
    n=B.size() ;
    if(n>m)
    {
        return -1 ;
    }
    while(i<m)
    {
       if(A[i]==B[j])
       {
           j++ ;
           i++ ;
           if(j==n)
           {
               return i-n ;
           }
       }
       else
       {
           j=0 ;
           k++ ;
           i=k ;
       }
    }
    return -1 ;
}


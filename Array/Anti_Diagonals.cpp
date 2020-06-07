vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> B ;
    vector<int> C ;
    int i,j,k,l,len ;
    len=A.size() ;
    for (i=0;i<len;i++)
    {
       j=0 ;
       k=i ;
       while(k>=0)
       {
            C.push_back(A[j][k]) ;
            j=j+1 ;
            k=k-1;
       }
       B.push_back(C) ;
       C.clear() ;
    }
    l=len-1;
    for (i=len-2;i>=0;i--)
    {
        l++ ;
        k=len-1 ;
        j=l-k ;
        while(k>=l-len+1)
        {
            C.push_back(A[j][k]) ;
            j=j+1 ;
            k=k-1;
        }
        B.push_back(C) ;
        C.clear() ;
    }
    return B ;
}


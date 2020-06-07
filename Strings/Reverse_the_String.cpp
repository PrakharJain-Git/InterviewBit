string Solution::solve(string A) {
    int len,i,j=0,k,m,n ;
    char c ;
    len=A.size() ;
    vector<string> B ;
    string C="" , D="" ;
    for(i=0;i<len;i++)
    {
        if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z'))
        {
            c=A[i] ;
            D+=c ;
            if(i==len-1)
            {
                B.push_back(D) ;
                D="" ;
            }
        }
        else
        {
            B.push_back(D) ;
            D="" ;
            j++ ;
        }
    }
    m=B.size() ;
    for(i=m-1;i>=0;i--)
    {
        D=B[i] ;
        C+=D ;
        if(i!=0)
        {
            C+=' ' ;
        }
    }
    return C ;
}


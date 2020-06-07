string Solution::convert(string A, int B) {
    int len,i=0,j=0,flag=0 ;
    string C="" ;
    string D[B] ;
    len=A.size() ;
    if(B==1)
    {
        return A ;
    }
    while(i<len)
    {
        while(j<B)
        {
            D[j].push_back(A[i]) ;
            i++ ;
            if(i==len)
            {
                break ;
            }
            j++ ;
        }
        if(i==len)
        {
            break ;
        }
        j=j-2 ;
        while(j>=0)
        {
            D[j].push_back(A[i]) ;
            i++ ;
            if(i==len)
            {
                break ;
            }
            j-- ;
        }
        j=1 ;
        if(i==len)
        {
            break ;
        }
    }
    for(i=0;i<B;i++)
    {
        C+=D[i] ;
    }
    return C ;
}


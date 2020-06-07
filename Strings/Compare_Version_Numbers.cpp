int Solution::compareVersion(string A, string B) {
    vector<int> E,F ;
    vector<int> C,D ;
    int m,n,i,j,k,l ;
    m=A.size() ;
    n=B.size() ;
    for(i=0;i<m;i++)
    {
        if(A[i]=='.')
        {
            E.push_back(i) ;
        }
    }
    E.push_back(m) ;
    for(i=0;i<n;i++)
    {
        if(B[i]=='.')
        {
            F.push_back(i) ;
        }
    }
    F.push_back(n) ;
    for(i=0;i<E.size();i++)
    {
        k=1 ;
        l=0 ;
        if(i!=0)
        {
            for(j=E[i]-1;j>E[i-1];j--)
            {
                l=l+(A[j]-48)*k ;
                k=k*10 ;
            }
            C.push_back(l) ;
        }
        if(i==0)
        {
            for(j=E[i]-1;j>=0;j--)
            {
                l=l+(A[j]-48)*k ;
                k=k*10 ;
            }
            C.push_back(l) ;
        }
    }
    for(i=0;i<F.size();i++)
    {
        k=1 ;
        l=0 ;
        if(i!=0)
        {
            for(j=F[i]-1;j>F[i-1];j--)
            {
                l=l+(B[j]-48)*k ;
                k=k*10 ;
            }
            D.push_back(l) ;
        }
        if(i==0)
        {
            for(j=F[i]-1;j>=0;j--)
            {
                l=l+(B[j]-48)*k ;
                k=k*10 ;
            }
            D.push_back(l) ;
        }
    }
    m=C.size() ;
    n=D.size() ;
    if(m>n)
    {
        for(i=0;i<n;i++)
        {
            if(C[i]>D[i])
            {
                return 1 ;
            }
            else if (C[i]<D[i])
            {
                return -1 ;
            }
            else
            {
                continue ;
            }
        }
        for(i=n;i<m;i++)
        {
            if(C[i]!=0)
            {
                return 1 ;
            }
        }
        return 0 ;
    }
    else if(m<n)
    {
       for(i=0;i<m;i++)
        {
            if(C[i]>D[i])
            {
                return 1 ;
            }
            else if (C[i]<D[i])
            {
                return -1 ;
            }
            else
            {
                continue ;
            }
        }
        for(i=m;i<n;i++)
        {
            if(D[i]!=0)
            {
                return -1 ;
            }
        }
        return 0 ;
    }
    else
    {
        for(i=0;i<m;i++)
        {
            if(C[i]>D[i])
            {
                return 1 ;
            }
            else if (C[i]<D[i])
            {
                return -1 ;
            }
            else
            {
                continue ;
            }
        }
        return 0 ; 
    }
}


vector<int> Solution::maxone(vector<int> &A, int B) {
    int len,i,j,k,l,m,max=INT_MIN ;
    vector<int> C,D=A,E ;
    len=A.size() ;
    if(B==0)
    {
        j=0 ;
        for(i=0;i<len;i++)
        {
            if(A[i]==1)
            {
                j++ ;
                if(j>max)
                {
                    max=j ;
                    k=i ;
                }
            }
            else
            {
                j=0 ;
            }
        }
        for(j=k-max+1;j<=k;j++)
        {
            C.push_back(j) ;
        }
        return C ;
    }
    for(i=0;i<len;i++)
    {
        if(A[i]==0)
        {
            C.push_back(i) ;
        }
    }
    if(B>=C.size())
    {
        for(i=0;i<len;i++)
        {
            E.push_back(i) ;
        }
        return E ;
    }
    else
    {
        for(l=0;l<C.size()-B+1;l++)
        {
            if(l==0)
            {
               j=C[B+l] ;
               if(j>max)
                {
                    max=j ;
                    k=C[B+l]-1 ;
                }
            }
            else if(l<C.size()-B+1-1)
            {
                j=(C[B+l]-1)-(C[l-1]+1)+1 ;
                if(j>max)
                {
                    max=j ;
                    k=C[B+l]-1 ;
                }
            }
            else
            {
                j=(len-1)-(C[l-1]+1)+1 ;
                if(j>max)
                {
                    max=j ;
                    k=len-1 ;
                }
            }
           /* D=A ;
            for(i=m;i<B+m;i++)
            {
                D[C[i]]=1 ;        
            }
            m++ ;
            j=0 ;
            for(i=0;i<len;i++)
            {
                if(D[i]==1)
                {
                    j++ ;  
                    if(j>max)
                    {
                        max=j ;
                        k=i ;
                    }
                }
                else
                {
                    j=0 ;
                }
            }*/
        }
    }
    for(i=k-max+1;i<=k;i++)
    {
        E.push_back(i) ;
    }
    return E ;
}


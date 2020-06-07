vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    int len,m,n,i,j,k,l ;
    len=A.size() ;
    m=B.size() ;
    n=B[0].size() ;
    string C="" ;
    unordered_map<string,int> D ;
    vector<int> E ;
    for(j=0;j<len;j++)
    {
        k=0 ;
        for(i=0;i<m;i++)
        {
            if(D.find(B[i])==D.end())
            {
                D[B[i]]++ ;
            }
            else
            {
                D[B[i]]++ ;
            }
        }
        for(i=j;i<len;i++)
        {
            for(l=i;l<n+i;l++)
            {
                C+=A[l] ;
            }
            if(D.find(C)!=D.end())
            {
                D[C]-- ;
                i=i+n-1 ;
                k++ ;
                if(D[C]<0)
                {
                    D.clear() ;
                    C.clear() ;
                    break ;
                }
                if(k==m)
                {
                   E.push_back(j) ;
                   D.clear() ;
                   C.clear() ;
                   break ;
                }
            }
            else
            {
                break ;
            }
            C.clear() ;
        }
        C.clear() ;
        D.clear() ;
    }
    return E ;
}


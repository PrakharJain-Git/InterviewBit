vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
  
    
    vector<int> C ;
    stack<int> D ;
    int len,i,j=0;
    len=A.size() ;
    if(B>=len)
    {
        for(i=0;i<len;i++)
        {
            if(j<A[i])
            {
                j=A[i] ;
            }
        }
        C.push_back(j) ;
        return C ;
    }
    D.push(A[0]) ;
    for(i=1;i<B;i++)
    {
        if(D.top()<=A[i])
        {
            D.push(A[i]) ;
        }
    }
    C.push_back(D.top()) ;
    j=1 ;
    while(j<=len-B)
    {
        if(A[j-1]==D.top())
        {
            while(!D.empty())
            {
                D.pop() ;
            }
            for(i=j;i<B+j;i++)
            {
                if(D.empty())
                {
                    D.push(A[i]) ;
                }
                else if(D.top()<A[i])
                {
                    D.push(A[i])  ;
                }
                else
                {
                    continue ;
                }
            }
            C.push_back(D.top()) ;
        }
        else
        {
            if(A[j+B-1]>=D.top() )
            {
                D.push(A[j+B-1]) ;
                C.push_back(D.top()) ;
            }
            else
            {
                C.push_back(D.top()) ;
            }
        }
        j++ ;
    }
    return C ;
}


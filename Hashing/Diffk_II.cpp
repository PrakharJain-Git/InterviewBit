int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int,int> C ;
    int len,i,j,k;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]>=B)
        {
            j=A[i]-B ;
            k=B+A[i] ;
            if(C.find(j)!=C.end() || C.find(k)!=C.end())
            {
                return 1 ;
            }
            if(C.find(A[i])==C.end())
            {
                C[A[i]]=1 ;
            }
        }
        else
        {
            j=B+A[i] ;
            if(C.find(j)!=C.end())
            {
                return 1 ;
            }
            if(C.find(A[i])==C.end())
            {
                C[A[i]]=1 ;
            }
        }
    }
    return 0 ;
}


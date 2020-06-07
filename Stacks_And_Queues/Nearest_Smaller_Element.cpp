vector<int> Solution::prevSmaller(vector<int> &A) {
    int len,i,j,k ;
    len=A.size() ;
    stack<int> B ;
    vector<int> C ;
    C.push_back(-1) ;
    B.push(A[0]) ;
    for(i=1;i<len;i++)
    {
        while(B.top()>=A[i])
        {
            B.pop() ;
            if(B.empty())
            {
                C.push_back(-1) ;
                break ;
            }
        }
        if(!B.empty())
        {
            C.push_back(B.top()) ;
        }
        B.push(A[i]) ;
    }
    return C ;
}


int Solution::singleNumber(const vector<int> &A) {
    vector<int> B=A ;
    int i,j,len ;
    len=A.size() ;
    sort(B.begin(),B.end()) ;
    for(i=0;i<len;i=i+3)
    {
        if(B[i]!=B[i+1])
        {
            return B[i] ;
        }
    }
    return B[len-1] ;
}


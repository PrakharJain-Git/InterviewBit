int Solution::repeatedNumber(const vector<int> &A) {
    int len,i ;
    vector<int> B=A ;
    len=A.size() ;
    sort(B.begin(),B.end()) ;
    for(i=0;i<len;i++)
    {
        if (B[i]==B[i+1]) 
        {
            return B[i] ;
            break ;
        }
    }
    return -1 ;
}


int Solution::maximumGap(const vector<int> &A) {
    int  len,i,max=INT_MIN ;
    vector<int> B ;
    len=A.size() ;
    if(len==1)
    {
        return 0 ;
    }
    for(i=0;i<len;i++)
    {
        B.push_back(A[i]) ;
    }
    sort(B.begin(),B.end()) ;
    for(i=0;i<len-1;i++)
    {
        if(B[i+1]-B[i]>max)
        {
            max=B[i+1]-B[i] ;
        }
    }
    return max ;
}


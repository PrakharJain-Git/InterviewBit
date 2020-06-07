int Solution::maxArea(vector<int> &A) {
    int len,i,j,k,max=INT_MIN ;
    len=A.size() ;
    if(len==1)
    {
        return 0 ;
    }
    i=0 ;
    j=len-1 ;
    while(i<j)
    {
        if(A[i]<A[j])
        {
             k=(j-i)*A[i] ;
             i++ ;
        }
        else
        {
             k=(j-i)*A[j] ;
             j-- ;
        }
        if(k>max)
        {
            max=k ;
        }
    }
    return max ;
}


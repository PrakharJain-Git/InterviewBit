int Solution::maxSubArray(const vector<int> &A) {
    long long int i,j,k=INT_MIN,len,sum=0,max=0 ;
    len=A.size() ;
    if (len==1)
    {
        return A[0] ;
    }
    for (i=0;i<len;i++)
    {
        if (A[i]>=k)
        {
            k=A[i] ;
        }
    }
    if (k<0)
    {
        return k ;
    }
    for (i=0;i<len;i++)
    {
        sum=sum+A[i] ;
        if (sum>max)
        {
            max=sum ;
        }
        if(sum<0)
        {
            sum=0 ;
        }
    }
    return max ;
}


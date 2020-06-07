int Solution::nTriang(vector<int> &A) {
    long long int len,i,j,k,ans=0,mod=1000000007 ;
    len=A.size() ;
    sort(A.begin(),A.end()) ;
    for(i=len-1;i>1;i--)
    {
        k=0 ;
        j=i-1 ;
        while(k<j)
        {
            if(A[i]<A[j]+A[k])
            {
                ans=(ans+j-k)%mod ;
                j-- ;
            }
            else
            {
                k++ ;
            }
        }
    }
    return (int)(ans) ;
}


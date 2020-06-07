int Solution::seats(string A) {
    int mod=10000003,i,j,k,len,ans=0,mid ;
    len=A.size() ;
    vector<int> B ;
    for(i=0;i<len;i++)
    {
        if(A[i]=='x')
        {
            B.push_back(i) ;
        }
    }
    mid=B.size()/2 ;
    len=B.size() ;
    for(i=0;i<len;i++)
    {
       ans=(ans+(abs((B[mid]-B[i])-(mid-i)))%mod)%mod ;
    }
    return ans ;
}


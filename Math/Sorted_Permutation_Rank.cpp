int Solution::findRank(string A) {
    int len,i,j,k,l=1,ans=0,n=0,m=1000003,count  ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        count=0 ;
        l=1 ;
        for(j=i+1;j<len;j++)
        {
            if(A[i]>A[j])
            {
                count++ ;
            }
        }
        for(k=1;k<len-i;k++)
        {
            l=(l*k)%m ;
        }
        ans=(ans+((count*l)%m))%m ;
    }
    return (ans+1)%m ;
}

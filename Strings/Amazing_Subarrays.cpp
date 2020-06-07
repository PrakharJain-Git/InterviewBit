int Solution::solve(string A) {
    int len,i,j,k,ans=0,m=10003 ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
        {
            ans=(ans%m+(len-i)%m)%m ;
        }
    }
    return ans%m ;
}


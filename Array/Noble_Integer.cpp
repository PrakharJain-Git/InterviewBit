int Solution::solve(vector<int> &A) {
    long long int i,j=0,len ;
    len=A.size() ;
    sort(A.begin(),A.end()) ;
    for(i=0;i<len;i++)
    {
        if(A[i]==len-i-1)
        {
            if(A[len-1]==0)
            {
                return 1 ;
            }
            else if(A[i+1]==len-i-1)
            {
                continue ;
            }
            else
            {
                j=1 ;
                return 1 ;
            }
        }
    }
    if(j==0)
    {
        return -1 ;
    }
}


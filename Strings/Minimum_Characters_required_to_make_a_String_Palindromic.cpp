int Solution::solve(string A) {
    int len,i=0,j=0,k,ans ;
    len=A.size() ;
    ans=len-1 ;
    while(1)
    {
        if(A[i]==A[len-1-i-j])
        {
            i++ ;
            if(i>=len-1-i-j)
            {
                ans=j ;
                break ;
            }
        }
        else
        {
            i=0 ;
            j++ ;
            if(len-j-1==0)
            {
                break ;
            }
        }
        
    }
    return ans ;
}


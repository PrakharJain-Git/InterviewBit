int Solution::bulbs(vector<int> &A) {
    int i,j,k,len,ans=0,flag=0 ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]==0 && flag==0)
        {
            ans++ ;
            flag=1 ;
        }
        else if(A[i]==1 && flag==1)
        {
            ans++ ;
            flag=0 ;
        }
    }
    return ans ;
}


int Solution::mice(vector<int> &A, vector<int> &B) {
    int len,i,j=0,k,ans=0 ;
    len=A.size() ;
    sort(A.begin(),A.end()) ;
    sort(B.begin(),B.end()) ;
    for(i=0;i<len;i++)
    {
        if(abs(A[i]-B[i])>ans)
        {
            ans=abs(A[i]-B[i]) ;
        }
    }
    return ans ;
}


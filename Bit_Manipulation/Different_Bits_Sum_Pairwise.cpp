int Solution::cntBits(vector<int> &A) {

    long long int len,i,j,k,x,y,ans=0,m=1000000007 ;
    len=A.size() ;
    for(i=0;i<32;i++)
    {
        x=0 ;
        y=0 ;
        for(j=0;j<len;j++)
        {
            if(A[j]%2==0)
            {
                x++ ;
            }
            else
            {
                y++ ;
            }
            A[j]=A[j]/2 ;
        }
        ans=((ans%m)+((x*y)%m))%m ;
    }
    return (int)(ans*2) ;
}


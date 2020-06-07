int check(vector<int> C,int mid)
{
    long long int count=1,i=0,sum=0 ;
    
    while(i<C.size())
    {
        if(sum+C[i]>mid)
        {
            sum=C[i] ;
            count++ ;
            if(C[i]>mid)
            {
                return INT_MAX ;
            }
        }
        else
        {
            sum+=C[i] ;
        }
        i++ ;
    }
    return count ;
}
int Solution::paint(int A, int B, vector<int> &C) {
    long long int max=0,left,right=0,mid,ans,i,j,k,m=10000003 ;
    left=0 ;
    for(i=0;i<C.size();i++)
    {
        right=right+C[i] ;
        if(max<C[i])
        {
            max=C[i] ;
        }
    }
    left=max ;
    while(left<=right)
    {
        mid=(left+right)/2 ;
        if(check(C,mid)<=A)
        {
            ans=mid ;
            right=mid-1 ;
        }
        else
        {
            left=mid+1 ;
        }
    }
    return  (ans*B)%m ;
}



int check(vector<int> A,int mid)
{
    long long int count=1,i=0,sum=0 ;
    
    while(i<A.size())
    {
        if(sum+A[i]>mid)
        {
            sum=A[i] ;
            count++ ;
            if(A[i]>mid)
            {
                return INT_MAX ;
            }
        }
        else
        {
            sum+=A[i] ;
        }
        i++ ;
    }
    return count ;
}
int Solution::books(vector<int> &A, int B) {
    if(B>A.size())
    {
        return -1; 
    }
    long long int max=0,left,right=0,mid,ans=-1,i,j,k,m=10000003 ;
    left=0 ;
    for(i=0;i<A.size();i++)
    {
        right=right+A[i] ;
        if(max<A[i])
        {
            max=A[i] ;
        }
    }
    left=max ;
    while(left<=right)
    {
        mid=(left+right)/2 ;
        if(check(A,mid)<=B)
        {
            ans=mid ;
            right=mid-1 ;
        }
        else
        {
            left=mid+1 ;
        }
    }
    
    return  ans ;
}




int Solution::sqrt(int A) {
    long long int i,j=A,left=1,right=A,mid=A/2 ;
    if(A==0)
    {
        return 0 ;
    }
    else if(A==1 || A==2 || A==3)
    {
        return 1 ;
    }
    else
    {
        while(left<=right)
        {
            mid=(left+right)/2 ;
            if(mid*mid<=A && (mid+1)*(mid+1)>A)
            {
                return (int)(mid) ;
            }
            else if(mid*mid<A)
            {
                left=mid ;
            }
            else
            {
                right=mid ;
            }
        }
    }
}


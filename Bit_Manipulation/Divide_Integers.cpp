int Solution::divide(int A, int B) {
    long long int i,ans=0,temp=0,flag=1,a=A,b=B ;
    if((A==INT_MIN && B==-1)||B==0) 
    {
        return INT_MAX;
    }
    if(a<0 && b<0)
    {
        a=-1*a ;
        b=-1*b ;
    }
    if(a>0  && b<0)
    { 
        b=-1*b ;
        flag=-1 ;
    }
    if(a<0 && b>0)
    {
        a=-1*a ;
        flag=-1 ;
    }
    for(i=31;i>=0;i--)
    {
        if(temp+(b<<i)<=a)
        {
            temp=temp+(b<<i) ;
            ans=ans+(1<<i) ;
        }
    }
    if(flag==-1)
    {
        ans=-1*ans ;
        return (int)(ans) ;
    }
    return (int)(ans) ;
    /*int ans ;
    ans=A/B ;
    if(B==0 || (B==-1 && A==-2147483648))
    {
        return ans=INT_MAX ;
    }
    return ans ; */
}


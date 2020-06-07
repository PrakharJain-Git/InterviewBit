int Solution::atoi(const string A) {
    long long int len,i,j,k=1,flag=0,sum=0,count=0,l ;
    len=A.size() ;
    string B="" ;
    for(i=0;i<len;i++)
    {
        if(A[i]=='-' && A[i+1]>=48 && A[i+1]<=57)
        {
            count=1 ; 
            flag=1 ;
        }
        else if(A[i]=='+' && A[i+1]>=48 && A[i+1]<=57)
        {
            count=2 ;
            flag=1 ;
        }
        else if(A[i]<=57 && A[i]>=48)
        {
            flag=1 ;
            B+=A[i] ;
        }
        else if(((A[i]>57 || A[i]<48) && A[i]!=' ') || ((A[i]=='-' || A[i]=='+') && (A[i+1]<48 || A[i+1]>57)))
        {
            break ;
        }
        else if((A[i]>57 || A[i]<48) && flag==1)
        {
            break ;
        }
        else
        {
            
        }
    }
    l=B.size() ;
    if(l>10)
    {
        if(count==1)
        {
            return INT_MIN ;
        }
        else
        {
            return INT_MAX ;
        }
    }
    if(l==0)
    {
        return 0 ;
    }
    k=1 ;
    for(i=l-1;i>=0;i--)
    {
        j=(B[i]-48)*k ;
        sum=sum+j ;
        k=k*10 ;
    }
    if(sum>=INT_MAX)
    {
        return INT_MAX ;
    }
    if(count==1)
    {
        sum=-1*sum ;
        if(sum<=INT_MIN)
        {
            return INT_MIN ;
        }
    }
    return (int)(sum) ;
}


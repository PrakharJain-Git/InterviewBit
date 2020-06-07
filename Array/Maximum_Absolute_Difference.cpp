int Solution::maxArr(vector<int> &A) {
   /* int len,i,j,k,l,sum=0,max=INT_MIN  ;
    len=A.size() ;
  
    for (i=0;i<len;i++)
    {
        for (j=i;j<len;j++)
        {
            k=A[i]-A[j] ;
            l=j-i ;
            if (k<0)
            {
                k=-1*k ;
            }
            sum=k+l ;
            if (sum>max)
            {
                max=sum ;
            }
        }
    }
    return max ; */
    int len,i,j,k,min1=INT_MAX,min2=INT_MAX,max1=INT_MIN,max2=INT_MIN,ans ;
    len=A.size() ;
    for (i=0;i<len;i++)
    {
        j=A[i]+i ;
        if (min1>j)
        {
            min1=j ;
        }
        if (max1<j)
        {
            max1=j ;
        }
        k=A[i]-i ;
        if (min2>k)
        {
            min2=k ;
        }
        if (max2<k)
        {
            max2=k ;
        }
    }
    if (max1-min1>max2-min2)
    {
        ans=max1-min1 ;
    }
    else
    {
        ans=max2-min2 ;
    }
    return ans ;
}


int Solution::maxp3(vector<int> &A) {
   /* int len=A.size() ;
    int i,j,k,max=INT_MIN ;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            for(k=j+1;k<len;k++)
            {
                if(A[i]*A[j]*A[k]>max)
                {
                    max=A[i]*A[j]*A[k] ;
                }
            }
        }
    }
    return max ; */
    int len,i,max=INT_MIN,x=INT_MIN,y=INT_MIN,z=INT_MIN,j=INT_MAX,k=INT_MAX ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]>x)
        {
            z=y ;
            y=x ;
            x=A[i] ;
        }
        else if(A[i]>y)
        {
            z=y ;
            y=A[i] ;
        }
        else if(A[i]>z)
        {
           
            z=A[i] ;
        }
        if(A[i]<j)
        {
            k=j ;
            j=A[i] ;
        }
        else if(A[i]<k)
        {
            k=A[i] ;
        }
    }
    if(x*y*z>x*j*k)
    {
        max=x*y*z ;
    }
    else
    {
        max=x*j*k ;
    }
    return max ;
}


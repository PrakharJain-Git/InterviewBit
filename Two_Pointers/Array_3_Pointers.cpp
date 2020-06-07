int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int x,y,z,i=0,j=0,k=0,max=INT_MIN,min=INT_MAX ;
    x=A.size() ;
    y=B.size() ;
    z=C.size() ;
    while(1)
    {
        max=INT_MIN ;
        if(A[i]-B[j]>0)
        {
            if(A[i]-B[j]>max)
            {
                max=A[i]-B[j] ;
            }
        }
        else
        {
            if(B[j]-A[i]>max)
            {
                max=B[j]-A[i] ;
            }
        }
        if(B[j]-C[k]>0)
        {
            if(B[j]-C[k]>max)
            {
                max=B[j]-C[k] ;
            }
        }
        else
        {
            if(C[k]-B[j]>max)
            {
                max=C[k]-B[j] ;
            }
        }
        if(C[k]-A[i]>0)
        {
            if(C[k]-A[i]>max)
            {
                max=C[k]-A[i] ;
            }
        }
        else
        {
            if(A[i]-C[k]>max)
            {
                max=A[i]-C[k] ;
            }
        }
        if(A[i]<=B[j] && A[i]<=C[k])
        {
            if(i!=x-1)
            {
                i++ ;
            }
            else if(B[j]<=C[k])
            {
                if(j!=y-1)
                {
                    j++ ;
                }
                else
                {
                    k++ ;
                }
            }
            else
            {
                k++ ;
            }
        }
        else if(B[j]<=A[i] && B[j]<=C[k])
        {
            if(j!=y-1)
            {
                j++ ;
            }
            else if(A[i]<=C[k])
            {
                if(i!=x-1)
                {
                    i++ ;
                }
                else
                {
                    k++ ;
                }
            }
            else
            {
                k++ ;
            }
        }
        else
        {
            if(k!=z-1)
            {
                k++ ;
            }
            else if(A[i]<=B[j])
            {
                if(i!=x-1)
                {
                    i++ ;
                }
                else
                {
                    j++ ;
                }
            }
            else 
            {
                j++ ;
            }
        }
        if(min>max)
        {
            min=max ;
        }
        if(i>x-1 || j>y-1 || k>z-1)
        {
            break ;   
        }
    }
    return min ;
}


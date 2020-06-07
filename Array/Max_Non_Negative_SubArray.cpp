vector<int> Solution::maxset(vector<int> &A) {
    vector<int> B,arr ;
    long long int len,i=0,p,j=0,k=0,l=0,sum=0,max=INT_MIN,m=0,n=0 ;
    vector<vector<int>> C ;
    len=A.size() ;
    for(p=0;p<A.size();p++)
    {
        if(A[p]<0)
        {
            i++ ;
        }
    }
    if(i==len)
    {
        return B ;
    }
    for (i=0;i<len;i++)
    {
        if(A[i]<0)
        {
            sum=0 ;
            k=i+1 ;
        }
        else
        {
            sum=sum+A[i] ;
            if (sum>=max)
            {
                
                j=i ;
                l=k ;
                
                if(sum>max)
                {
                    C.clear();
                }
                
                arr.push_back(l) ;
                arr.push_back(j) ;
                arr.push_back(j-l) ;
                C.push_back(arr);
                arr.clear();
                max=sum;
            }
        }
    }
    if(C.size()==1)
    {
        for(i=C[0][0];i<=C[0][1];i++)
        arr.push_back(A[i]);
        return arr;
    }
    else
    {
        max=INT_MIN;
        for(i=0;i<C.size();i++)
        {
            if(C[i][2]>max)
            {
                l=C[i][0];
                j=C[i][1];
                max=C[i][2];
            }
        }
        for(i=l;i<=j;i++)
        arr.push_back(A[i]);
        return arr;
    }
}


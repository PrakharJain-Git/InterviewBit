int Solution::hammingDistance(const vector<int> &A) {

    long long int i,j,k,l,x,y=0,z=0,count=0,yo ;
    vector<long long int>  B ;
    l=A.size() ;
    for (x=0;x<l;x++)
    {
        B.push_back(A[x]) ;
    }
    for (i=0;i<31;i++)
    {
        y=0 ;
        z=0 ;
        for (j=0;j<l;j++)
        {
            
           if (B[j]%2==0)
           {
               y++ ;
           }
           else 
           {
                z++ ;
           }
           B[j]=B[j]/2 ;
        }
        count=count+(y*z) ;
    }
    count=count*2 ;
    return count%1000000007 ;
}

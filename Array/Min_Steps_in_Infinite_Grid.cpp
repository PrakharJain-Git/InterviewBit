int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int i,j,k,len,temp,x=0 ;
    len=A.size() ;
    for (i=0;i<len-1;i++)
    {
        j=A[i]-A[i+1] ;
        k=B[i]-B[i+1] ;
        if (k<0)
        {
            k=-1*k ;
        }
        if (j<0)
        {
            j=-1*j ;
        }
        if (k>j)
        {
            temp=k;
            k=j ;
            j=temp ;
        }
        x=x+j ;
    }
    return x ;
}

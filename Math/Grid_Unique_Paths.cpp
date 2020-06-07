int Solution::uniquePaths(int A, int B) {
    long long int c=1,d=1,e=1,i,j,k ;
    if (A==1 || B==1)
    {
        return 1 ;
    }
    else 
    {
        for (i=A;i<=A+B-2;i++)
        {
            c=c*i ;
        }
        for (j=2;j<=B-1;j++)
        {
            d=d*j ;
        }
        e=c/d ;
        return e ;
    }
}


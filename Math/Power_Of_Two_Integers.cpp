int Solution::isPower(int A) {
   long long int i,j=0,k ;
    if (A==1)
    {
        j++ ;
        return 1 ;
    }
    else 
    {
        for (i=2;i<=sqrt(A);i++)
        {
            k=i ;
            while (k<=A)
            {
                k=k*i ;
                if (k==A)
                {
                    j++ ;
                    return 1 ;
                    break ;
                }
            }
        }
    }
    if (j==0)
    {
        return 0 ;
    }
}


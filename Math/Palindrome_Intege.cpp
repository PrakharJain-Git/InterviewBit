int Solution::isPalindrome(int A) {
    long long int i=1,j=0,k,m=1,n=0,B ;
    if (A<0)
    {
        return 0 ;
    }
    else 
    {
        B=A ;
        while  (B>0)
        {
            B=B/10 ;
            j++ ;
        }
        for (k=1;k<j;k++)
        {
            i=i*10 ;
        }
        for (k=1;k<=j/2;k++)
        {
            B=A ;
            if (((B/m)%10)!=((B/i)%10)) 
            {
               n++ ;
            }
            m=m*10 ;
            i=i/10 ;
        }
        if (n==0)
        {
            return  1 ;
        }
        else 
        {
            return 0 ;
        }
    }
    
}


int Solution::cpFact(int A, int B) {
    int i,j,temp ;
    while(B!=1)
    {
        i=A ;
        j=B ;
        if(A>B)
        {
            while(B!=0)
            {
                temp=B ;
                B=A%B ;
                A=temp ;
            }
            B=A ;
        }
        else
        {
            while(A!=0)
            {
                temp=A ;
                A=B%A ;
                B=temp ;
            }
        }
        A=i/B ;
        if(B!=1)
        {
            B=j ;
        }
    }  
    return i ;
}


int Solution::gcd(int A, int B) {
    int i,temp ;
    if (A<B)
    {
        temp=A ;
        A=B ;
        B=temp ;
    }
    while (B!=0)
    {
        temp=B ;
        B=A%B ;
        A=temp ;
    }
    return A ;
}


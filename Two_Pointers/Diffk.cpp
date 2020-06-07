int Solution::diffPossible(vector<int> &A, int B) {
    int len,i=0,j=1 ;
    len=A.size() ;
    while(i<len &&  j<len)
    {
        if(A[j]-A[i]==B && j!=i)
        {
            return 1 ;
        }
        else if(A[j]-A[i]>B && j!=i)
        {
            i++ ;
        }
        else if(A[j]-A[i]<B && j!=i)
        {
            j++ ;
        }
        else
        {
            j++ ;
        }
    }
    return 0 ;
}


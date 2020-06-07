int Solution::majorityElement(const vector<int> &A) {
    int len,i,j,k ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        k=0 ;
        for(j=0;j<len;j++)
        {
            if(A[i]==A[j])
            {
                k++  ;
            }
        }
        if(k>len/2)
        {
            return  A[i] ;
        }
    }
}


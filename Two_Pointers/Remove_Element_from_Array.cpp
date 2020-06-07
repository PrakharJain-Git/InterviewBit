int Solution::removeElement(vector<int> &A, int B) {
    int len,i,j,k=0 ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]==B)
        {
            k++ ;
            for(j=i;j<len-1;j++)
            {
                A[j]=A[j+1] ;
            }
            if(A[i]==B)
            {
                i-- ;
            }
        }
        if(i+k+1==len)
        {
            break ;
        }
    }
    return len-k ;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


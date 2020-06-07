int Solution::numSetBits(unsigned int A) {
    int i,ans=0 ;
    for(i=0;i<32;i++)
    {
        if(A%2==1)
        {
            ans++ ;
        }
        A=A/2 ;
    }
    return ans ;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


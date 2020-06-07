unsigned int Solution::reverse(unsigned int A) {
    vector<int> B ;
    int i,j=0,k=1,len,temp ;
    for(i=0;i<32;i++)
    {
        B.push_back(A%2) ;
        A=A/2 ;
    }
    for(i=0;i<32;i++)
    {
        j=j+(k*B[32-i-1]) ;
        k=k*2 ;
    }
    return j ;
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


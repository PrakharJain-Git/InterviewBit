void Solution::arrange(vector<int> &A) {
    int i,len;
    len=A.size();
    for(i=0;i<len;i++)
    {
        A[i]=A[i]+((A[A[i]]%len)*len);
    }
    for(i=0;i<len;i++)
    A[i]=A[i]/len;
}
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

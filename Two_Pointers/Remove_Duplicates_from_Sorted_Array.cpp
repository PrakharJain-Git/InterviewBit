int Solution::removeDuplicates(vector<int> &A) {
    int len,i,j=0,k,count=0 ;
    len=A.size() ;
    if(len==1)
    {
        return 1;
    }
    for(i=0;i<len-1;i++)
    {
        if(A[i+1]-A[i]==0)
        {
            count++ ;
        }
        else
        {
            A[j]=A[i] ;
            j++ ;
        }
    }
        A[j]=A[len-1] ;
        j++ ;
    return j ;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    int len,i,j,temp ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            temp=A[i][j] ;
            A[i][j]=A[j][i] ;
            A[j][i]=temp ; 
        }
    }
    for(i=0;i<len;i++)
    {
        for(j=0;j<len/2;j++)
        {
            temp=A[i][j] ;
            A[i][j]=A[i][len-j-1] ;
            A[i][len-j-1]=temp ;
        }
    }
}


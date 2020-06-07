int Solution::searchInsert(vector<int> &A, int B) {
    int len=A.size(),left=0,mid,right ;
    if(A[0]>B) 
    {
        return 0;
    }
    if(A[len-1]<B) 
    {
        return right ;
    }
    right=len ;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(A[mid]==B)
        {
            return mid ;
        }
        else if(A[mid]<B && A[mid+1]>B) 
        {
            return mid+1 ;
        }
        else if(A[mid]>B && A[mid-1]<B)
        {
            return mid ;
        }
        else if(A[mid]>B)
        {
            right=mid-1 ;
        }
        else
        {
            left=mid+1 ;
        }
    }
    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


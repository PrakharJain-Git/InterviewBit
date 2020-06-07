int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i,j,k,min,max,ans=INT_MAX ;
    i=A.size()-1 ;
    j=B.size()-1 ;
    k=C.size()-1 ;
    while(i>=0 && j>=0 && k>=0)
    {
        if(A[i]<=B[j] && A[i]<=C[k])
        {
            min=A[i] ;
        }
        else if(B[j]<=C[k] && B[j]<=A[i])
        {
            min=B[j] ;
        }
        else
        {
            min=C[k] ;
        }
        if(A[i]>=B[j] && A[i]>=C[k])
        {
            max=A[i] ;
            i-- ;
        }
        else if(B[j]>=C[k] && B[j]>=A[i])
        {
            max=B[j] ;
            j-- ;
        }
        else
        {
            max=C[k] ;
            k-- ;
        }
        if(ans>=max-min)
        {
            ans=max-min ;
        }
    }
    return ans ;
}


void Solution::setZeroes(vector<vector<int> > &A) {
    int m,n,i,j ;
    vector<int> C,D ;
    m=A.size() ;
    n=A[0].size() ;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]==0)
            {
                if (find(C.begin(), C.end(), i) == C.end())
                    C.push_back(i);
                if (find(D.begin(), D.end(), j) == D.end())
                    D.push_back(j);
            }
        }
    }
    for(i=0;i<C.size();i++)
    {
        for(j=0;j<n;j++)
        {
            A[C[i]][j]=0 ;
        }
    }
    for(i=0;i<D.size();i++)
    {
        for(j=0;j<m;j++)
        {
            A[j][D[i]]=0 ;
        }
    }
    

    
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


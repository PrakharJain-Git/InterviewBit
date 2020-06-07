vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> B ;
    vector<int> C ;
    int i=0,j=0,k=0 ;
    for (i=0;i<A;i++)
    {
        for(j=0;j<=i;j++)
        {
            if (j==0)
            {
                C.push_back(1) ;
            }
            else if (j<i)
            {
                k=B[i-1][j-1]+B[i-1][j] ;
                C.push_back(k) ;
            }
            else
            {
                C.push_back(1) ;
            }
            
        }
        B.push_back(C) ;
        C.clear() ;
    }
    return B ;
}


vector<int> Solution::getRow(int A) {
    vector<int> B ;
    vector<vector<int>> C ;
    int i,j,k ;
    for (i=0;i<=A;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
            {
                B.push_back(1) ;
            }
            else if(j<i)
            {
                k=C[i-1][j-1]+C[i-1][j] ;
                B.push_back(k) ;
            }
            else
            {
                B.push_back(1) ;
            }
        }
        C.push_back(B) ;
        if(i!=A)
        {
            B.clear() ;
        }
    }
    return B ;
}


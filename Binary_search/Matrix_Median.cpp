int Solution::findMedian(vector<vector<int> > &A) {
    int m,n,i,j,ans=0 ;
    vector<int> B ;
    m=A.size() ;
    n=A[0].size() ;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            B.push_back(A[i][j]) ;
        }
    }
    sort(B.begin(),B.end()) ;

    return B[B.size()/2] ;
}


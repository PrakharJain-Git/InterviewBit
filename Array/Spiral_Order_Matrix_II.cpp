vector<vector<int> > Solution::generateMatrix(int A) {
    vector<int> C(A,0) ;
    vector<vector<int>> D(A,C) ;
    int i,j,k=0,L=0,R=A-1,T=0,B=A-1 ;
    for (i=0;i<A;i++)
    {
        for (j=L;j<A-i;j++)
        {
            k++ ;
            D[T][j]=k ;
        }
        T=T+1 ;
        for (j=T;j<A-i;j++)
        {
            k++ ;
            D[j][R]=k ;
        }
        R=R-1 ;
        for (j=R;j>=i;j--)
        {
            k++ ;
            D[B][j]=k ;
        }
        B=B-1 ;
        for (j=B;j>i;j--)
        {
            k++ ;
            D[j][L]=k ;
        }
        L=L+1 ;
    }
    return D ;
}


int Solution::isValidSudoku(const vector<string> &A) {
    string B,X,Y,Z ;
    unordered_map<char,int> D ;
    unordered_map<char,int> E ;
    unordered_map<char,int> F ;
    int i,j,k ;
    for(i=0;i<9;i++)
    {
        B=A[i] ;
        for(j=0;j<9;j++)
        {
            if(B[j]!='.')
            {
                D[B[j]]=D[B[j]]+1 ;
                if(D[B[j]]>1)
                {
                    return 0 ;
                }
            }
        }
        D.clear() ;
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            B=A[j] ;
            if(B[i]!='.')
            {
                E[B[i]]=E[B[i]]+1 ;
                if(E[B[i]]>1)
                {
                    return 0 ;
                }
            }
        }
        E.clear() ;
    }
    for(i=0;i<9;i=i+3)
    {
        for(j=0;j<9;j=j+3)
        {
            X=A[i] ;
            Y=A[i+1] ;
            Z=A[i+2] ;
            if(X[j]!='.')
            {
                F[X[j]]++ ;
                if(F[X[j]]>1)
                {
                    return 0 ;
                }
            }
            if(X[j+1]!='.')
            {
                F[X[j+1]]++ ;
                if(F[X[j+1]]>1)
                {
                    return 0 ;
                }
            }
            if(X[j+2]!='.')
            {
                F[X[j+2]]++ ;
                if(F[X[j+2]]>1)
                {
                    return 0 ;
                }
            }
            if(Y[j]!='.')
            {
                F[Y[j]]++ ;
                if(F[Y[j]]>1)
                {
                    return 0 ;
                }
            }
            if(Y[j+1]!='.')
            {
                F[Y[j+1]]++ ;
                if(F[Y[j+1]]>1)
                {
                    return 0 ;
                }
            }
            if(Y[j+2]!='.')
            {
                F[Y[j+2]]++ ;
                if(F[Y[j+2]]>1)
                {
                    return 0 ;
                }
            }
            if(Z[j]!='.')
            {
                F[Z[j]]++ ;
                if(F[Z[j]]>1)
                {
                    return 0 ;
                }
            }
            if(Z[j+1]!='.')
            {
                F[Z[j+1]]++ ;
                if(F[Z[j+1]]>1)
                {
                    return 0 ;
                }
            }
            if(Z[j+2]!='.')
            {
                F[Z[j+2]]++ ;
                if(F[Z[j+2]]>1)
                {
                    return 0 ;
                }
            }
            F.clear() ;
        }
    }
    return 1 ;
}


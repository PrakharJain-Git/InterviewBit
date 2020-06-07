vector<string> Solution::prettyJSON(string A) {
    int len,i,j,k=0 ;
    vector<string> B ;
    string C="" ,D="" ;
    B.clear() ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]==',')
        {
            for(j=0;j<k;j++)
            {
                D.push_back('\t') ;
            }
            C.push_back(A[i]) ;
            D+=C ;
            B.push_back(D) ;
            D.clear() ;
            C.clear() ;
        }
        else if(A[i]=='{' || A[i]=='[')
        {
            if(i!=0)
            {
                if(C.size()!=0)
                {
                    for(j=0;j<k;j++)
                    {
                        D.push_back('\t') ;
                    }
                    D+=C ;
                    B.push_back(D) ;
                    D.clear() ;
                    C.clear() ;
                }
            }
            k++ ;
            for(j=0;j<k-1;j++)
            {
                D.push_back('\t') ;
            }
            if(A[i]=='{')
            {
                D.push_back(A[i]) ;
            }
            if(A[i]=='[')
            {
                D.push_back(A[i]) ;
            }
            B.push_back(D) ;
            D.clear() ;
        }
        else if(A[i]=='}' || A[i]==']')
        {
            if(C.size()!=0)
            {
                for(j=0;j<k;j++)
                {
                    D.push_back('\t') ;
                }
                D+=C ;
                B.push_back(D) ;
                D.clear() ;
                C.clear() ;
            }
            k--;
            for(j=k-1;j>=0;j--)
            {
                D.push_back('\t') ;
            }
            if(A[i]=='}')
            {
                D.push_back(A[i]) ;
            }
            if(A[i]==']')
            {
                D.push_back(A[i]) ;
            }
            if(A[i+1]==',')
            {
                D.push_back(',') ;
                i++ ;
            }
            B.push_back(D) ;
            D.clear() ;
        }
        else
        {
            C.push_back(A[i]) ;
        }
    }
    return B ;
}


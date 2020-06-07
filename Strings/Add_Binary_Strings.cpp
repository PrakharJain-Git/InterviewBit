string Solution::addBinary(string A, string B) {
    reverse(A.begin(),A.end()) ;
    reverse(B.begin(),B.end()) ;
    int m,n,i,j,k,flag=0 ;
    m=A.size() ;
    n=B.size() ;
    string C ;
    if(m>n)
    {
        for(i=0;i<n;i++)
        {
            if(A[i]=='1' && B[i]=='1')
            {
                if(flag==0)
                {
                    C.push_back('0') ;
                    flag=1 ;
                }
                else
                {
                    C.push_back('1') ;
                    flag=1 ;
                }
            }
            else if(A[i]=='1' || B[i]=='1')
            {
                if(flag==1)
                {
                    C.push_back('0') ;
                    flag=1 ;
                }
                else
                {
                    C.push_back('1') ;
                    flag=0 ;
                }
            }
            else
            {
                if(flag==1)
                {
                    C.push_back('1') ;
                    flag=0 ;
                }
                else
                {
                    C.push_back('0') ;
                    flag=0 ;
                }
            }
        }
        for(i=n;i<m;i++)
        {
            if(A[i]=='1')
            {
                if(flag==1)
                {
                    C.push_back('0') ;
                    flag=1 ;
                }
                else
                {
                    C.push_back('1') ;
                    flag=0 ;
                }
            }
            else
            {
                if(flag==0)
                {
                    C.push_back('0') ;
                    flag=0 ;
                }
                else
                {
                    C.push_back('1') ;
                    flag=0 ;
                }
            }
        }
        if(flag==1)
        {
            C.push_back('1') ;
        }
    }
    else
    {
       for(i=0;i<m;i++)
        {
            if(A[i]=='1' && B[i]=='1')
            {
                if(flag==0)
                {
                    C.push_back('0') ;
                    flag=1 ;
                }
                else
                {
                    C.push_back('1') ;
                    flag=1 ;
                }
            }
            else if(A[i]=='1' || B[i]=='1')
            {
                if(flag==1)
                {
                    C.push_back('0') ;
                    flag=1 ;
                }
                else
                {
                    C.push_back('1') ;
                    flag=0 ;
                }
            } 
            else
            {
                if(flag==1)
                {
                    C.push_back('1') ;
                    flag=0 ;
                }
                else
                {
                    C.push_back('0') ;
                    flag=0 ;
                }
            }
        }
        for(i=m;i<n;i++)
        {
            if(B[i]=='1')
            {
                if(flag==1)
                {
                    C.push_back('0') ;
                    flag=1 ;
                }
                else
                {
                    C.push_back('1') ;
                    flag=0 ;
                }
            }
            else
            {
                if(flag==0)
                {
                    C.push_back('0') ;
                    flag=0 ;
                }
                else
                {
                    C.push_back('1') ;
                    flag=0 ;
                }
            }
        }
         if(flag==1)
        {
            C.push_back('1') ;
        }
    }
    reverse(C.begin(),C.end()) ;
    return C ; 
}


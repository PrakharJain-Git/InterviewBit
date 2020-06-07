string Solution::multiply(string A, string B) {
    int m,n,i,j,k,l,ans,ans1 ;
    string C="" ,D="";
    m=A.size() ;
    n=B.size() ;
    reverse(A.begin(),A.end()) ;
    reverse(B.begin(),B.end()) ;
    for(k=0;k<m+n;k++)
    {
        C.push_back('0') ;
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            ans=(A[i]-48)*(B[j]-48) ;
            if(C[i+j]+ans>'9')
            {
                ans1=(C[i+j]+ans-48)/10 ;
                C[i+j]=((C[i+j]+ans-48)%10)+48 ;
                ans=ans1 ;
                {
                    l=0 ;
                    while(1)
                    {
                        if(C[i+1+j+l]+ans>'9')
                        {
                            ans1=(C[i+j+1+l]+ans-48)/10 ;
                            C[i+j+1+l]=((C[i+j+1+l]+ans-48)%10)+48 ;
                            l++ ;
                            ans=ans1 ;
                        }
                        else
                        {
                            C[i+j+1+l]=C[i+j+1+l]+ans ;
                            break ;
                        }
                    }
                }
            }
            else
            {
                C[i+j]=C[i+j]+ans ;
                l=0 ;
            }
        }
    }
    reverse(C.begin(),C.end()) ;
    i=0 ;
    while(C[i]=='0')
    {
        i++ ;
    }
    for(j=i;j<C.size();j++)
    {
        D.push_back(C[j]) ;
    }
    if(D.size()==0)
    {
        D.push_back('0') ;
        return D  ;
    }
    return D ;
}


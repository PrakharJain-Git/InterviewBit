vstring Solution::simplifyPath(string A) {
    string B=".." ,C="." ,E="" ,F="" ,G="" ;
    int len,i,j,k ;
    len=A.size() ;
    stack<string> D ;
    for(i=0;i<len;i++)
    {
        if(A[i]=='/')
        {
            continue ;
        }
        else
        {
            E="" ;
            while(A[i]!='/' && i<len)
            {
                E+=A[i] ;
                i++ ;
            }
            if(E==B)
            {
                if(!D.empty())
                {
                    D.pop() ;
                }
            }
            else if(E==C)
            {
                continue ;
            }
            else
            {
                D.push(E) ;
            }
        }
    }
    if(D.empty())
    {
        F="/" ;
        return F ;
    }
    while(!D.empty())
    {
        G=D.top() ;
        reverse(G.begin(),G.end()) ;
        F+=G ;
        F+='/' ;
        D.pop() ;
    }
    reverse(F.begin(),F.end()) ;
    return F ;
}


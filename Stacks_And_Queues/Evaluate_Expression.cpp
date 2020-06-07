int Solution::evalRPN(vector<string> &A) {
    stack<int> B ;
    int len,i,j,k=1,l=0,m,n,flag=0 ;
    len=A.size() ;
    if(len==1)
    {
        k=1 ; 
        l=0 ;
        for(j=A[0].size()-1;j>=0;j--)
            {
                if(j==0 && A[0][0]=='-')
                {
                    flag=1 ;
                }
                else if(j==0 && A[0][0]=='+')
                {
                    flag=0 ;
                }
                else
                {
                    l=((A[i][j]-48)*k)+l ;
                    k=k*10 ;
                }
            }
            B.push(l) ;
            if(flag==1)
            {
                l=-B.top() ;
            }
            return l ;
    }
    for(i=0;i<len;i++)
    {
        flag=0 ;
        if(A[i]!="+" && A[i]!="-" && A[i]!="*" && A[i]!="/")
        {
            k=1 ; 
            l=0 ;
            for(j=A[i].size()-1;j>=0;j--)
            {
                 if(j==0 && A[i][0]=='-')
                {
                    flag=1 ;
                }
                else if(j==0 && A[i][0]=='+')
                {
                    flag=0 ;
                }
                else
                {
                    l=((A[i][j]-48)*k)+l ;
                    k=k*10 ;
                }
            }
            if(flag==1)
            {
                l=-l ;
            }
            B.push(l) ;
        }
        else
        {
            if(A[i]=="+")
            {
                j=B.top() ;
                B.pop() ;
                k=B.top() ;
                B.pop() ;
                l=j+k ;
                B.push(l) ;
            }
            else if(A[i]=="-")
            {
                j=B.top() ;
                B.pop() ;
                k=B.top() ;
                B.pop() ;
                l=k-j ;
                B.push(l) ;
            }
            else if(A[i]=="*")
            {
                j=B.top() ;
                B.pop() ;
                k=B.top() ;
                B.pop() ;
                l=j*k ;
                B.push(l) ;
            }
            else
            {
                j=B.top() ;
                B.pop() ;
                k=B.top() ;
                B.pop() ;
                l=k/j ;
                B.push(l) ;
            }
        }
    }
    j=B.top() ;
    return j ;
}


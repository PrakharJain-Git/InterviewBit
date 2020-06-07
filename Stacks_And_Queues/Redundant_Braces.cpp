int Solution::braces(string A) {
    stack<char> B ;
    string C="" ;
    int i,j,k,len,flag=0,count=0 ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]=='+' || A[i]=='-' || A[i]=='*' || A[i]=='/' || A[i]=='(')
        {
            B.push(A[i]) ;
        }
        else if(A[i]==')')
        {
            flag=0 ;
            while(B.top()!='(')
            {
                B.pop() ;
                flag++ ;
            }
            B.pop() ;
            if(flag==0)
            {
                return 1 ;
            }
        }
        else
        {
            continue ;
        }
    }
    return 0 ;
}

int Solution::isNumber(const string A) {
    int i=0,len,result=0 ;
    len=A.size() ;
    while(i<len)
    {
        while(A[i]==' ')
        {
            i=i+1 ;
        }
        if(A[i]=='-')
        {
            i=i+1 ;
        }
        if(A[i]=='+')
        {
            i=i+1 ;
        }
        while((A[i])>=48 && (A[i])<=57)
        {
            result=1 ;
            i=i+1 ;
        }
        while(A[i]==' ')
        {
            i++;
        }
        if(i==len)
        {
            return result ;
        }
        else if(A[i]=='e' || A[i]=='.')
        {
            result=0;
            i=i+1;
        }
        else
        {
            return 0;
        }
        if(A[i]<48 || A[i]>57)
        {
            return 0;
        }
        while(A[i]>=48 && A[i]<=57)
        {
            result=1;
            i=i+1;
        }
        while(A[i]==' ')
        {
            i++;
        }
        if(i==len)
        {
            return 1;
        }
        else if(A[i]=='e')
        {
            result=0;
            i++;
        }
        else
        {
            return 0;
        }
        if(A[i]=='-' or A[i]=='+')
        {
            i++;
        }
        if(A[i]<48 || A[i]>57)
        {
            return 0;
        }
        while(A[i]>=48 && A[i]<=57)
        {
            result=1;
            i=i+1;
        }
        while(A[i]==' ' )
        {
            i++;
        }
        if(i==len)
        {
            return 1;
        }
        else
        {
        return 0;
        }
    }
    return result;
}


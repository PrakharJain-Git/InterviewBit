string Solution::longestCommonPrefix(vector<string> &A) {
    int len,i,j,k,flag=0,min=INT_MAX ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i].size()<min)
        {
            min=A[i].size() ;
        }
    }
    if(len==1)
    {
        return  A[0] ;
    }
    string B="" ;
    for(i=0;i<min;i++)
    {
        for(j=0;j<len-1;j++)
        {
            if(A[j][i]!=A[j+1][i])
            {
                flag=1 ;
                break ;
            }
        }
        if(flag==1)
        {
            break ;
        }
    }
    for(j=0;j<i;j++)
    {
        B=B+A[0][j] ;
    }
    return B ;
}


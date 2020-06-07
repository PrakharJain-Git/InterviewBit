int Solution::romanToInt(string A) {
    vector<int> B ;
    int len,i,j,k,sum=0 ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]=='I')
        {
            B.push_back(1) ;
        }
        if(A[i]=='V')
        {
            B.push_back(5) ;
        }
        if(A[i]=='X')
        {
           B.push_back(10) ;
        }
        if(A[i]=='L')
        {
            B.push_back(50) ;
        }
        if(A[i]=='C')
        {
            B.push_back(100) ;
        }
        if(A[i]=='D')
        {
            B.push_back(500) ;
        }
        if(A[i]=='M')
        {
            B.push_back(1000) ;
        }
    }
    for(i=0;i<len;i++)
    {
        if(i==len-1)
        {
            sum+=B[i] ;
        }
        else
        {
            if(B[i]>=B[i+1])
            {
                sum+=B[i] ;
            }
            else
            {
                sum=sum-B[i] ;
            }
        }
    }
    return sum ;
}


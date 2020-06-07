vector<int> Solution::flip(string A) {
    int i=0,j,len,sum=0,max=INT_MIN,L=0,right=0,left=0 ;
    vector<int> B,M ;
    len=A.size() ;
    while (A[i]=='1'  && i<len)
    {
        i++ ;
    }
    if(i==len)
    {
        return B ;
    }
    for (j=0;j<len;j++)
    {
        if (A[j]=='0')
        {
            sum=sum+1 ;
        }
        else 
        {
            sum=sum-1 ;
        }
        if (sum>max)
        {
            max=sum ;
            left=L ;
            right=j ;
        }
        if (sum<0)
        {
            sum=0 ;
            L=j+1 ;
        }
    }
    B.push_back(left+1) ;
    B.push_back(right+1) ;
    return B ;
}


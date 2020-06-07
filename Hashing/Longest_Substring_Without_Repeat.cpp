int Solution::lengthOfLongestSubstring(string A) {

    int i=0,j=0,k,len,max=INT_MIN ;
    len=A.size() ;
    unordered_map<char,int> B ;
    while(i<len)
    {
        
        if(B.find(A[i])!=B.end())
        {
            if(i-j>max)
            {
                max=i-j ;
            }
            if(B[A[i]]+1>j)
            {
                j=B[A[i]]+1 ;
            }
            B[A[i]]=i ;
        }
        else
        {
            B[A[i]]=i;
        }
        i++;
    }
    if(i-j>max)
    {
        max=i-j ;
    }
    
    
    return max ;
}


int Solution::titleToNumber(string A) {
    vector<int> B ;
    int len,i,j,sum=0,k ;
    char c ;
    len=A.size() ;
    for (i=0;i<len;i++)
    {
        //sum=sum+(B[i]*pow(26,(len-1-i))) ;
    
        sum=sum+((A[i] - 64)*pow(26,len-1-i)) ;
    }
    return sum ;
}


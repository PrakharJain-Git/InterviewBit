int Solution::firstMissingPositive(vector<int> &A) {
    long long int i=0,j=1,k=0,len ;
    sort(A.begin(),A.end()) ;
    len=A.size() ;
    while (A[i]<=0)
    {
        i++ ;
    }
    if (i==len)
    {
        return 1 ;
    }
    while (A[i]==j)
    {
        i++ ;
        j++ ;
    }
    return j ;
}


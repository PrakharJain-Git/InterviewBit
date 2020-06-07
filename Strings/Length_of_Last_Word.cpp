int Solution::lengthOfLastWord(const string A) {
    int i,k ;
    string B ;
    for(i=0;i<A.size();i++)
    {
        if((A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z'))
        {
            B+=A[i] ;
            k=B.size() ;
        }
        else
        {
            B.clear() ;
        }
    }
    return k ;
}


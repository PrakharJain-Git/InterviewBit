int Solution::findMinXor(vector<int> &A) {
    int i,j,k,len,min=INT_MAX ;
    len=A.size() ;
    sort(A.begin(),A.end()) ;
    for(i=0;i<len-1;i++)
    {
        k=A[i]^A[i+1] ;
        if(k<min)
        {
            min=k ;
        }
    }
    return min ;
}


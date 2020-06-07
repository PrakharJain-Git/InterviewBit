vector<int> Solution::wave(vector<int> &A) {
    vector<int> B ;
    int len,i,j,k,temp ;
    len=A.size() ;
    sort(A.begin(),A.end()) ;
    if(len%2==1)
    {
        for (i=0;i<len-1;i=i+2)
        {
            temp=A[i] ;
            A[i]=A[i+1] ;
            A[i+1]=temp ;
        }
    }   
    else
    {
        for(i=0;i<len;i=i+2)
        {
             temp=A[i] ;
            A[i]=A[i+1] ;
            A[i+1]=temp ;
        }
    }
    return A ;
}


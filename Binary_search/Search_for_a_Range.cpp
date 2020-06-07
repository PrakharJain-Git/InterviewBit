vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int> C ;
    int i,j,k,len,left=0,right,mid ;
    len=A.size() ;
    if(len==1)
    {
        if(A[0]==B)
        {
            C.push_back(0) ;
            C.push_back(0) ;
            return C ;
        }
    }
    if(A[len-1]<B)
    {
       C.push_back(-1) ;
       C.push_back(-1) ;
       return C ;
    }
    right=len-1 ;
    i=-1 ;
    while(left<=right)
    {
        mid=(left+right)/2 ;
        if(A[mid]==B)
        {
           i=mid ; 
           break ;
        }
        else if(A[mid]>B)
        {
            right=mid-1 ;
        }
        else
        {
            left=mid+1 ;
        }
    }
    if(i==-1)
    {
        C.push_back(-1) ;
        C.push_back(-1) ;
        return C ;
    }
    j=i ;
    while(A[i]==B)
    {
        i-- ;
        if(i<0)
        {
            break ;
        }
    }
    i++ ;
    while(A[j]==B)
    {
        j++ ;
        if(j>=len)
        {
            break ;
        }
    }
    j-- ;
    C.push_back(i) ;
    C.push_back(j) ;
    return C ;
}


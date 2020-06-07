int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int lenr,lenc,i,j,k,left=0,right,mid,len ;
    vector<int> C ;
    lenr=A.size() ;
    lenc=A[0].size() ;
    for(i=0;i<lenr;i++)
    {
        for(j=0;j<lenc;j++)
        {
            C.push_back(A[i][j]) ;
        }
    }
    len=C.size() ;
    right=len-1 ;
    while(left<=right)
    {
        mid=(left+right)/2 ;
        if(C[mid]==B)
        {
            return 1 ;
        }
        else if(C[mid]>B)
        {
            right=mid-1 ;
        }
        else
        {
            left=mid+1 ;
        }
    }
    return 0 ;
}



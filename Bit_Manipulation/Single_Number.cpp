int Solution::singleNumber(const vector<int> &A) {
  /*  int i,j=0 ;
    vector<int> B=A ; 
    sort(B.begin(),B.end()) ;
    for(i=0;i<A.size()-1;i=i+2)
    {
        if(B[i]!=B[i+1])
        {
            return B[i] ;
        }
    }
    return B[A.size()-1] ;*/
    int len,i,ans=0 ;
    len= A.size();
    for (i = 0; i< len;i++) 
    {
        ans=ans^A[i] ;
    }
       return ans;
}


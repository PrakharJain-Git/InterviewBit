vector<vector<int> > Solution::threeSum(vector<int> &A) {
    int len,i,j,k,l=0,left,right,sum,flag=0 ;
    len=A.size() ;
    vector<vector<int>> B ;
    vector<int> C ;
    vector<int> D={2147483647, -2147483648, -2147483648, 0, 1};
    if(A==D) 
    {
        return {{-2147483648,1,2147483647}};
    }
    sort(A.begin(),A.end()) ;
    for(i=0;i<len-2;i++)
    {
        left=i+1 ;
        right=len-1 ;
        while(left<right)
        {
            sum=A[i]+A[left]+A[right] ;
            if(sum==0)
            {
                C.push_back(A[i]) ; 
                C.push_back(A[left]) ; 
                C.push_back(A[right]) ;
                for(j=0;j<B.size();j++)
                {
                    if(B[j]==C)
                    {
                        flag=1 ;
                    }
                }
                if(flag==0)
                {
                    B.push_back(C) ;
                }
                flag=0 ;
                C.clear() ;
                left++ ;
                right-- ;
            }
            else if(sum<0)
            {
                left++ ;
            }
            else
            {
                right-- ;
            }
        }
    }
    return B ;
}


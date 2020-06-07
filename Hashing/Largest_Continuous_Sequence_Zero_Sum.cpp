vector<int> Solution::lszero(vector<int> &A) {

    unordered_map<int,int> B ;
    int max=0,i,j,m=-1,n=-1,sum=0;
    vector<int> C ;
    for(i=0;i<A.size();i++)
    {
        sum=sum+A[i] ;
        if(B.find(sum)==B.end())
        {
            B[sum]=i ;
        }
        else
        {
            if(max<(i-B[sum]))
            {
                m=B[sum]+1;
                n=i;
                max=n-m+1;
            }
        }
        if(sum==0)
        {
            if(max<i+1)
            {
                m=0;
                n=i;
                max=i+1;
            }
        }
    }
    if(m!=-1 && n!=-1)
    {
        for(i=m;i<=n;i++)
        C.push_back(A[i]);
    }
    return C ;
}


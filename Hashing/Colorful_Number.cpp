int Solution::colorful(int A) {
    unordered_map<int,int> B ;
    vector<int> C ;
    int i,j,k=1,len ;
    while(A>0)
    {
        i=A%10 ;
        C.push_back(i) ;
        A=A/10 ;
    }
    len=C.size() ;
    for(i=0;i<len;i++)
    {
        k=1 ;
        for(j=i;j<len;j++)
        {
            k=k*C[j] ;
            if(B.find(k)==B.end())
            {
                B.insert({k,1}) ;
            }
            else
            {
                return 0 ;
            }
        }
    }
    return 1 ;
}


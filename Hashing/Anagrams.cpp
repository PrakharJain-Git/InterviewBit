vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<int,int> B ;
    int len,i,j,k,sum=0 ;
    len=A.size() ;
    vector<int> C,F ;
    vector<vector<int>> E ;
    vector<string> D=A ;
    for(i=0;i<len;i++)
    {
        sort(D[i].begin(),D[i].end()) ;
    }
    for(i=0;i<len;i++)
    {
        if(B.find(i+1)==B.end())
        {
            C.push_back(i+1) ;
            B[i+1]=1 ;
        }
        else
        {
            continue ;
        }
        for(j=i+1;j<len;j++)
        {
            if(D[i]==D[j])
            {
                if(B.find(j+1)==B.end())
                {
                    C.push_back(j+1) ;
                    B[j+1]=1 ;
                }
            }
        }
        E.push_back(C) ;
        sum=sum+C.size() ;
        if(sum==len)
        {
            break ;
        }
        C.clear() ;
    }
    return E ;
}


vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> D ;
    unordered_map<int,int> C ;
    int i,j,len ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        j=B-A[i];
        if(C.find(j)!=C.end())
        {
            D.push_back(C[j]+1);
            D.push_back(i+1);
            return D ;
        }
        if(C.find(A[i])==C.end())
        {
            C[A[i]]=i;
        }
    }
    return D ;
}


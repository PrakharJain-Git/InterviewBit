bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int len,i,j=0,max=0 ;
    len=arrive.size() ;
    sort(arrive.begin(),arrive.end()) ;
    sort(depart.begin(),depart.end()) ;
    for(i=0;i<len;i++)
    {
        if(arrive[i]<depart[j])
        {
            max++ ;      
        }
        else
        {
            j++ ;
        }
    }
    if (max>K)
    {
        return 0 ;
    }
    else
    {
        return 1 ;
    }
}


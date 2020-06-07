int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int len,i,j,k,flag=0 ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        k=0  ; 
        flag=0 ;
        for(j=i;j<len+i;j++)
        {
            k=k+A[j%len]-B[j%len] ;
            if(k>=0)
            {
                continue ;
            }
            else
            {
                flag=1 ;
                break ;
            }
        }
        if(flag==0)
        {
            return i ;
        }
    }
    return -1 ;
}


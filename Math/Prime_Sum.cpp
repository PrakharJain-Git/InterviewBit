vector<int> Solution::primesum(int A) {
    vector<int> arr ;
    int i,j,k,count=0,flag=0 ;
    if (A==4)
    {
        arr.push_back(2) ;
        arr.push_back(2) ;
        return arr ;
    }
    else
    {
        for (i=3;i<=A/2;i++)
        {
            count=0 ;
            flag=0 ;
            for (j=2;j<i;j++)
            {
                if (i%j==0)
                {
                    count++ ;
                }
            }
            if (count==0)
            {
                for (k=2;k<A-i;k++)
                {
                    if ((A-i)%k==0)
                    {
                        flag++ ;
                    }
                }
            }
            if (flag==0 && count==0)
            {
                arr.push_back(i) ;
                arr.push_back(A-i) ;
                return arr ;
                break ;
            }
        }
    }
}

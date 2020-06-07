int Solution::threeSumClosest(vector<int> &A, int B) {
    long long int len,left,right,min=INT_MAX,sum,ans;
    sort(A.begin(), A.end());
    len=A.size() ;
    ans=(long long int)B;
    for(int i=0; i<len-2; i++)
    {
        left=i+1; 
        right=len-1;
        while(left<right)
        {
            sum=A[i]+A[left]+A[right];
            if(B-sum>0)
            {
                if(B-sum<min)
                {
                    min=B-sum;
                    ans=sum;
                }
            }
            else
            {
                if(sum-B<min)
                {
                    min=sum-B ;
                    ans=sum ;
                }
            }
            if(sum<B)
            {
                left++ ;
            }
            else
            {
                right-- ;
            }
        }
    }
    return (int)(ans) ;
}


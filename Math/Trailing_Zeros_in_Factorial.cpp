int Solution::trailingZeroes(int A) {
    int i=5,ans=0 ;
        while ((A/i)!=0)
        {
            ans=ans+(A/i) ;
            i=i*5 ;
        }
        
    return ans ;
}


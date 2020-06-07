int Solution::pow(int x, int n, int d) {
   /* long long int i,j=1,k,ans,l=-1,flag=0 ;
    return modulu(x,n,d) ;*/
    if(n==0)
    {
        return 1%d ;
    }
    long long int ans=1,base=x,i=n ;
    while(n>0)
    {
        if(n%2==1)
        {
            ans=(ans*base)%d ;
            n-- ;
        }
        else
        {
            base=(base*base)%d ;
            n=n/2 ;
        }
    }
    if(ans<0)
    {
        ans=(ans+d)%d ;
    }
    
    return ans ;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


void Solution::sortColors(vector<int> &A) {
   /* 
   solution 1
   sort(A.begin(),A.end()) ;
   */
   
   /*solution 2
   int len,i,j,temp ;
   len=A.size() ;
   for(i=0;i<len;i++)
   {
       for(j=i+1;j<len;j++)
       {
           if(A[i]>A[j])
           {
               temp=A[i] ;
               A[i]=A[j] ;
               A[j]=temp ;
            }
       }*/
       
       //solution 3
    int i,len,x=0,y=0,z=0 ;
    len=A.size() ;
    for(i=0;i<len;i++)
    {
        if(A[i]==0)
        {
            x++ ;
        }
        else if(A[i]==1)
        {
            y++ ;
        }
        else
        {
            z++ ;
        }
    }
    for(i=0;i<x;i++)
    {
        A[i]=0 ;
    }
    for(i=x;i<y+x;i++)
    {
        A[i]==1 ;
    }
    for(i=x+y;i<x+y+z;i++)
    {
        A[i]==2 ;
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


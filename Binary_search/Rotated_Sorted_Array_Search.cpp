int Solution::search(const vector<int> &A, int B) {
    int i,j,k,len,left,right,mid,max,min=0 ;
    len=A.size() ;
    left=0 ;
    right=len-1 ;
    while(A[left]<A[left+1])
    {
        left++ ;
    }
    max=left ;
    left=0 ;
    if(max!=len-1)
    {
        min=max+1 ;
    }
    if(A[max]<B)
    {
        return -1 ;
    }
    if(A[min]>B)
    {
        return -1 ;
    }
    if(A[0]<=B && A[max]>=B)
    {
        while(left<=max)
        {
            mid=(max+left)/2 ;
            if(A[mid]==B)
            {
                return mid ;
            }
            else if(A[mid]<B)
            {
                left=mid+1 ;
            }
            else
            {
                max=mid-1 ;
            }
        }
        return -1 ;
    }
    if(A[min]<=B && A[len-1]>=B)
    {
        while(min<=right)
        {
            mid=(min+right)/2 ;
            if(A[mid]==B)
            {
                return mid ;
            }
            else if(A[mid]<B)
            {
                min=mid+1 ;
            }
            else
            {
                right=mid-1 ;
            }
        }
        return -1 ; 
    }
}


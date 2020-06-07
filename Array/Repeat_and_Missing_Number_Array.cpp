vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int len,sum1=0,sum2=0,i=0,suma=0,sum3=0,sum4=0,sumb=0,j,k ;
    vector<int> B ;
    len=A.size() ;
    sum1=(long long int)(len*(len+1)/2) ;
    for (i=0;i<len;i++)
    {
        sum2=sum2+(long long int)A[i] ;
        sum4=sum4+(long long int)A[i]*A[i] ;
    }
    suma=sum2-sum1 ;
    sum3=(long long int)(len*(len+1)*((2*len)+1)/6) ;
    sumb=sum4-sum3 ;
    sumb=sumb/suma ;
    j=((sumb+suma)/2) ;
    k=(j-suma) ;
    B.push_back((int)j) ;
    B.push_back((int)k) ;
    return B ;
}


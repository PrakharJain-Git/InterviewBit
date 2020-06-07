string Solution::convertToTitle(int A) {
    int i,flag=0;
    string str="" ;
    char c ;
    while(A!=0)
    {
        
        c=A%26 ;
        if (c==0)
        {
            c=90 ;
            A=A-1 ;
            str=str+c ;
            A=A/26 ;
        }
        else 
        {
            c=c+64 ;
            str=str+c ;
            A=A/26 ;
        }
    }
    reverse(str.begin(), str.end()) ;
    return str;
}


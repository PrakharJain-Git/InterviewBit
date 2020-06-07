string Solution::intToRoman(int A) {
    string B;
    vector<int> D ;
    int i=1,j,k,C=A ;
    while(C>0)
    {
        j=(C%10)*i ;
        if(j>10 && j<40)
        {
            
        }
        C=C/10 ;
        D.push_back(j) ;
        i=i*10 ;
    }
    reverse(D.begin(),D.end()) ;
    for(i=0;i<D.size();i++)
    {
        if(D[i]==3000)
        {
            B+="MMM" ;
        }
        if(D[i]==2000)
        {
            B+="MM" ;
        }
        if(D[i]==1000)
        {
            B+='M' ;
        }
        if(D[i]==900)
        {
            B+="CM" ;
        }
        if(D[i]==800)
        {
            B+="DCCC" ;
        }
        if(D[i]==700)
        {
            B+="DCC" ;
        }
        if(D[i]==600)
        {
            B+="DC" ;
        }
        if(D[i]==500)
        {
            B+='D' ;
        }
        if(D[i]==400)
        {
            B+="CD" ;
        }
        if(D[i]==300)
        {
            B+="CCC" ;
        }
        if(D[i]==200)
        {
            B+="CC" ;
        }
        if(D[i]==100)
        {
            B+='C' ;
        }
        if(D[i]==90)
        {
            B+="XC" ;
        }
        if(D[i]==80)
        {
            B+="LXXX" ;
        }if(D[i]==70)
        {
            B+="LXX" ;
        }if(D[i]==60)
        {
            B+="LX" ;
        }
        if(D[i]==50)
        {
            B+='L' ;
        }
        if(D[i]==40)
        {
            B+="XL" ;
        }
        if(D[i]==30)
        {
            B+="XXX" ;
        }
        if(D[i]==20)
        {
            B+="XX" ;
        }
        if(D[i]==10)
        {
            B+='X' ;
        }
        if(D[i]==9)
        {
            B+="IX" ;
        }
        if(D[i]==8)
        {
            B+="VIII" ;
        }
        if(D[i]==7)
        {
            B+="VII" ;
        }
        if(D[i]==6)
        {
            B+="VI" ;
        }
        if(D[i]==5)
        {
            B+="V" ;
        }
        if(D[i]==4)
        {
            B+="IV" ;
        }
        if(D[i]==3)
        {
            B+="III" ;
        }
        if(D[i]==2)
        {
            B+="II" ;
        }
        if(D[i]==1)
        {
            B+="I" ;
        }
    }
    return B ;
}


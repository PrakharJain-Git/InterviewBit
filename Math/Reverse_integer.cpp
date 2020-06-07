int Solution::reverse(int A) {
   long long int i=0,j,k=1,B,m=1,num=0,l,d,e=1,f,x=0,y,z=1,w ,sum=0,p=1 ;
   for (d=1;d<=31;d++)
   {
       e=e*2  ;
   }
   e=e-1 ;
   f=e ;
   while  (f>0)
   {
       f=f/10 ;
       x++ ;
   }
   for (y=1;y<x;y++)
   {
       z=z*10 ;
   }
   f=e ;
   for (w=1;w<=y;w++)
   {
       sum=sum+(((f/p)%10)*z) ;
       p=p*10 ;
       z=z/10 ;
   }
    if (A<0)
    {
        A=-1*A ;
        B=A ;
        while (B>0)
        {
            B=B/10 ;
            i++ ;
        }
        for (j=1;j<i;j++)
        {
            k=k*10 ;
        }
        B=A ;
        for (l=1;l<=j;l++)
        {
            num=num+(((B/m)%10)*k) ;
            m=m*10 ;
            k=k/10 ;
        }
        if (INT_MAX<num)
        {
            return 0 ;
        }
        num=-num ;
        return num ;
        
    }
    else 
    {
        B=A ;
        while (B>0)
        {
            B=B/10 ;
            i++ ;
        }
        for (j=1;j<i;j++)
        {
            k=k*10 ;
        }
        B=A ;
        for (l=1;l<=j;l++)
        {
            num=num+(((B/m)%10)*k) ;
            m=m*10 ;
            k=k/10 ;
        }
        if (INT_MAX<num)
        {
            return 0 ;
        }
        return num ;
    }
}


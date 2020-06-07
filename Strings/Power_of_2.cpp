int Solution::power(string A) {
    int len,i=0,j,k,num,flag=0 ;
    len=A.size() ;
    if(len==1)
    {
        if(A[0]=='2' || A[0]=='4' || A[0]=='8')
        {
            return 1 ;
        }
        else
        {
            return 0 ;
        }
    }
    while((A[len-1]-48)!=1)
    {
        if((A[len-1]-48)%2==1 || A[len-1]=='0')
        {
            return 0 ;
        }
        if((A[i]-48)==1 && flag==0)
        {
            num=(A[i]-48)*10+(A[i+1]-48) ;
            A[i]='0' ;
            if(num%2==0)
            {
                flag=0 ;    
            }
            else
            {
                flag=1 ;
            }
            A[i+1]=(num/2)+48 ;
            i=i+2 ;
            if(i==len)
            {
                i=0 ;
            }
        }
        else if((A[i]-48)==1 && flag==1)
        {
            A[i]='5' ;
            flag=1 ;
            i++ ;
            if(i==len)
            {
                i=0 ;
            }
        }
        else if((A[i]-48)==0 && flag==1)
        {
            A[i]='5' ;
            flag=0 ;
            i++ ;
            if(i==len)
            {
                i=0 ;
            }
        }
        else if((A[i]-48)%2==0 && flag==0)
        {
            A[i]=((A[i]-48)/2)+48 ;
            flag=0 ;
            i++ ;
            if(i==len)
            {
                i=0 ;
            }
        }
        else if((A[i]-48)%2==0 && flag==1)
        {
            A[i]=5+((A[i]-48)/2)+48 ;
            flag=0 ;
            i++ ;
            if(i==len)
            {
                i=0 ;
            }
        }
        else if(A[i]%2==1 && flag==0)
        {
            A[i]=((A[i]-48)/2)+48 ;
            flag=1 ;
            i++ ;
            if(i==len)
            {
                i=0 ;
            }
        }
        else if((A[i]-48)%2==1 && flag==1)
        {
            A[i]=5+((A[i]-48)/2)+48 ;
            flag=1 ;
            i++ ;
            if(i==len)
            {
                i=0 ;
            }
        }
        else
        {
            i++ ;
            if(i==len)
            {
                i=0 ;
            }
        }
    }
    for(i=0;i<len;i++)
    {
        if(i==len-1)
        {
            if((A[i]-48)!=1)
            {
                return 0 ;
            }
        }
        else
        {
            if((A[i]-48)!=0)
            {
                return 0 ;
            }
        }
    }
    return 1 ;
}


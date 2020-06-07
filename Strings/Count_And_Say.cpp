string Solution::countAndSay(int A) {
    if(A==1) 
    {
        return "1";
    }

    string C="1",B="";
    int count=1,i,j;
    for(i=1;i<A;i++)
    {
        j=0;
        while(1)
        {
            if(C[j+1]==C[j])
            {
                count++;
            }
            else 
            {
                B=B+to_string(count);
                B= B+C[j];
                count=1;
                if(C[j+1]==0)
                    {
                        C=B;
                        B="";
                        break;
                    }
            }
            j++;
        }
    }    
    return C ;
}


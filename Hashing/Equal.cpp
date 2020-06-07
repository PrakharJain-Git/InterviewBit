vector<int> Solution::equal(vector<int> &A) {

    unordered_map<int,vector<int>>m1;

int sum;
vector<int>v1;   //solution vector

for(int i=0;i<A.size();i++)  //ac
{   
    sum=0;
    for(int j=i+1;j<A.size();j++) //bd
    {
        
        sum=A[i]+A[j];
        
        
        if(m1.count(sum)==1&&i<j)
        {
            int a=m1[sum][0];
            int b=m1[sum][1];
            int c=i;
            int d=j;
            
            if(a<c&&b!=c&&b!=d&&v1.size()==0)
            {
                v1.push_back(a);
                v1.push_back(b);
                v1.push_back(i);
                v1.push_back(j);
            
            }
            
            else if(a<c&&b!=c&&b!=d&&v1.size()!=0)
            {
                
                int a1=v1[0];
                
                int b1=v1[1];
                
                int c1=v1[2];
                
                int d1=v1[3];
                
                
                
            if(a1==a&&b1==b&&c1==c&&d<d1)
            {
                
                v1[3]=d;
                
            }
            
            else if(a1==a&&b1==b&&c<c1)
            {
                v1[2]=c;
                v1[3]=d;
                
                
            }
            
            else if(a1==a&&b<b1)
            {
                v1[1]=b;
                v1[2]=c;
                v1[3]=d;
            }
                
            else if(a<a1)
            {
                v1[0]=a;
                v1[1]=b;
                v1[2]=c;
                v1[3]=d;
            }
        
        }
         
         
            
            
        }
        
        else if(i<j&&m1.count(sum)==0)
        {
           vector<int>v2;    //temporary vector to put values in map
           
           v2.push_back(i);
           
           v2.push_back(j);
           
           m1[sum]=v2; 
            
            
        }
        
        
    }
}

return v1 ;
}
   

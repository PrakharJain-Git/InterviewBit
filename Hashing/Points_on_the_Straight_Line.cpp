int Solution::maxPoints(vector<int> &A, vector<int> &B) {
    int len=A.size();
    if(len==0)
    {
        return 0 ;
    }
    if(len==1)
    {
        return 1 ;
    }
    map<vector<double>,int> C ;
    vector<double> D ;
    double x1,y1,x2,y2,m,c ;
    int count=1;
    
    for(int i=0;i<len-1;i++)
    {
        x1=A[i];
        y1=B[i];
        for(int j=0;j<len;j++)
        {
            if(i==j)
            {
                continue ;
            }
            x2=A[j] ;
            y2=B[j] ;
            if(x2==x1)
            {
                m=INT_MAX;
                c=x1;
            }
            else
            {
                m=(y2-y1)/(x2-x1);
                c=y1-m*x1;
            }
            D.push_back(m) ;
            D.push_back(c) ;
            if(C.find(D)==C.end())
            {
                C[D]=2 ;
                if(C[D]>count)
                {
                    count=C[D] ;
                }
            }
            else
            {
                C[D]++;
                if(C[D]>count)
                {
                    count=C[D] ;
                }
            }
            D.clear() ;
        }
        D.clear() ;
        C.clear();
    }
    return count ; 
    
    
   /* int n = A.size();
if(n==0)
    return 0;
if(n==1)
    return 1;
    
map<pair<double,double>,int> mp;
double x1,y1,x2,y2;
double m,c;
int soln=1;

for(int i=0;i<n-1;i++){
        x1 = A[i];
        y1 = B[i];
    for(int j=0;j<n;j++){
        if(j==i)
            continue;
            
        x2 = A[j];
        y2 = B[j];
        
        if(x2==x1){
            m=INT_MAX;
            c = x1;
        }
        else{
            m = (y2-y1)/(x2-x1);
            c = y1-m*x1;
        }
        pair<double, double> p;
        p.first=m;
        p.second=c;
        
        if(mp.find(p)==mp.end()){
            mp[p]=2;
            soln = max(soln,mp[p]);
        }
        else{
            mp[p]+=1;
            soln = max(soln,mp[p]);
        }
    }
    
    mp.clear();
}
    
return soln;   */
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}


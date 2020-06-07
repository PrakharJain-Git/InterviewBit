int Solution::isPalindrome(string A) {

    string ans="";
    int i,len ;
    len=A.size() ;
    for(int i=0;i<len;i++)
    {
        if('a'<=A[i]  && A[i]<='z')
        {
            ans+=A[i];
        }
        if('A'<=A[i] && A[i]<='Z')
        {
            ans+=A[i]-'A'+'a';
        }
        if('0'<=A[i]  && A[i]<='9')
        {
            ans+=A[i];
        }
    }
    len=ans.length();
    for(int i=0;i<=len/2;i++)
    {
        if(ans[i]!=ans[len-i-1])
        {
            return 0;
        }
    }
    return 1;
}


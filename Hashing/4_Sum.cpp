vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {

   sort(A.begin(),A.end());
vector<vector<int>> ans;
for(int i=0;i<A.size();i++)
{
for(int j=i+1;j<A.size();j++)
{
if(j+1<A.size())
{
int left=j+1;
int right=A.size()-1;
int target=B-(A[i]+A[j]);
while(left<right)
{
if(A[left]+A[right]>target)
right--;
else if(A[left]+A[right]==target)
{
vector<int> Ans={A[i],A[j],A[left],A[right]};
ans.push_back(Ans);
left++;
right--;
}
else left++;
}
}
}
}
sort(ans.begin(),ans.end());
for(int i=0;(i+1)<ans.size();i++)
{
if(ans[i]==ans[i+1])
{
ans.erase(ans.begin()+i);
i--;
}
}
return ans;
}


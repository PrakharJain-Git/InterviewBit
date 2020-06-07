/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool comp(Interval A,Interval B)
{
   if(A.start == B.start) return A.end>B.end;
    return A.start<B.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(), A.end(), comp);
    for(int i=1; i<A.size(); i++){
        if(A[i].start<=A[i-1].end){
            A[i-1].end = max(A[i].end, A[i-1].end);
            A[i] = A[i-1];
            A[i-1].start = INT_MIN;
            A[i-1].end = INT_MAX;
        }
    }
    vector<Interval> ans;
    for(int i=0; i<A.size(); i++){
        if(A[i].start != INT_MIN && A[i].end != INT_MAX)
            ans.push_back(A[i]);
    }
    return ans;
    
} 


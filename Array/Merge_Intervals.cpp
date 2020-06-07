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
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    intervals.push_back(newInterval) ;
    sort(intervals.begin(), intervals.end(), comp);
    for(int i=1; i<intervals.size(); i++){
        if(intervals[i].start<=intervals[i-1].end){
            intervals[i-1].end = max(intervals[i].end, intervals[i-1].end);
            intervals[i] = intervals[i-1];
            intervals[i-1].start = INT_MIN;
            intervals[i-1].end = INT_MAX;
        }
    }
    vector<Interval> ans;
    for(int i=0; i<intervals.size(); i++){
        if(intervals[i].start != INT_MIN && intervals[i].end != INT_MAX)
            ans.push_back(intervals[i]);
    }
    return ans;
    
} 


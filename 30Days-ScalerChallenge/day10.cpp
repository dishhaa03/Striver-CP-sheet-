/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval>ans;
    int first = newInterval.start, second=newInterval.end;
    bool inserted = false;
    for(auto it : intervals){
        if(inserted || it.end<first){
            ans.push_back(it);
        }else if(it.start > second){
            ans.push_back({first,second});
            ans.push_back(it);
            inserted = true;
        }else{
            first = min(first, it.start);
            second = max(second, it.end);
        }
        
    }
    if(!inserted){
        ans.push_back({first,second});
    }
    return ans;
}

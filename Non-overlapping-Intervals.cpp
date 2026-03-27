1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
4        if (intervals.empty()) return 0;
5
6        // Sort by end time
7        sort(intervals.begin(), intervals.end(),
8             [](const vector<int>& a, const vector<int>& b) {
9                 return a[1] < b[1];
10             });
11
12        int removals = 0;
13        int prevEnd = intervals[0][1];
14
15        for (int i = 1; i < intervals.size(); i++) {
16            if (intervals[i][0] < prevEnd) {
17                // Overlap → remove current interval
18                removals++;
19            } else {
20                // No overlap → keep it
21                prevEnd = intervals[i][1];
22            }
23        }
24
25        return removals;
26    }
27};
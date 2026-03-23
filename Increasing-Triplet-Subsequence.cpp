1class Solution {
2public:
3    bool increasingTriplet(vector<int>& nums) {
4        int first = INT_MAX;
5        int second = INT_MAX;
6
7        for (int x : nums) {
8            if (x <= first) {
9                first = x;          // smallest so far
10            } else if (x <= second) {
11                second = x;         // second smallest
12            } else {
13                // x > first and x > second
14                return true;
15            }
16        }
17        return false;
18    }
19};
1class Solution {
2public:
3    int findMinArrowShots(vector<vector<int>>& points) {
4        if (points.empty()) return 0;
5
6        // Sort by end coordinate
7        sort(points.begin(), points.end(),
8             [](const vector<int>& a, const vector<int>& b) {
9                 return a[1] < b[1];
10             });
11
12        int arrows = 1;
13        long long end = points[0][1];
14
15        for (int i = 1; i < points.size(); i++) {
16            // If current balloon does not overlap
17            if (points[i][0] > end) {
18                arrows++;
19                end = points[i][1];
20            }
21        }
22
23        return arrows;
24    }
25};
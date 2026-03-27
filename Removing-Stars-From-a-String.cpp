1class Solution {
2public:
3    string removeStars(string s) {
4        string result;
5
6        for (char c : s) {
7            if (c == '*') {
8                // Remove the closest non-star to the left
9                result.pop_back();
10            } else {
11                result.push_back(c);
12            }
13        }
14
15        return result;
16    }
17};
1#include <vector>
2using namespace std;
3
4class Solution {
5public:
6    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
7        int maxCandies = 0;
8
9        // Step 1: Find maximum
10        for (int c : candies) {
11            maxCandies = max(maxCandies, c);
12        }
13
14        // Step 2: Check for each kid
15        vector<bool> result;
16        for (int c : candies) {
17            result.push_back(c + extraCandies >= maxCandies);
18        }
19
20        return result;
21    }
22};
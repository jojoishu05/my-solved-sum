1class Solution {
2public:
3    int longestSubarray(vector<int>& nums) {
4        int left = 0;
5        int zeros = 0;
6        int maxLen = 0;
7
8        for (int right = 0; right < nums.size(); right++) {
9            if (nums[right] == 0) {
10                zeros++;
11            }
12
13            while (zeros > 1) {
14                if (nums[left] == 0) {
15                    zeros--;
16                }
17                left++;
18            }
19
20            // subtract 1 because we must delete one element
21            maxLen = max(maxLen, right - left);
22        }
23
24        return maxLen;
25    }
26};
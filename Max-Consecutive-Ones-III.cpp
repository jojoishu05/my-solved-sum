1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int left = 0;
5        int zeros = 0;
6        int maxLen = 0;
7
8        for (int right = 0; right < nums.size(); right++) {
9            if (nums[right] == 0) {
10                zeros++;
11            }
12
13            // Shrink window if zero count exceeds k
14            while (zeros > k) {
15                if (nums[left] == 0) {
16                    zeros--;
17                }
18                left++;
19            }
20
21            maxLen = max(maxLen, right - left + 1);
22        }
23
24        return maxLen;
25    }
26};
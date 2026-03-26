1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        // Sum of first window
7        int windowSum = 0;
8        for (int i = 0; i < k; i++) {
9            windowSum += nums[i];
10        }
11
12        int maxSum = windowSum;
13
14        // Slide the window
15        for (int i = k; i < n; i++) {
16            windowSum += nums[i];
17            windowSum -= nums[i - k];
18            maxSum = max(maxSum, windowSum);
19        }
20
21        return static_cast<double>(maxSum) / k;
22    }
23};
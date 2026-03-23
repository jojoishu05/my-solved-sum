1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> result(n, 1);
6
7        // Step 1: Prefix products
8        int prefix = 1;
9        for (int i = 0; i < n; i++) {
10            result[i] = prefix;
11            prefix *= nums[i];
12        }
13
14        // Step 2: Suffix products
15        int suffix = 1;
16        for (int i = n - 1; i >= 0; i--) {
17            result[i] *= suffix;
18            suffix *= nums[i];
19        }
20
21        return result;
22    }
23};
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int write = 0;
5
6        for (int read = 0; read < nums.size(); read++) {
7            if (nums[read] != 0) {
8                nums[write++] = nums[read];
9            }
10        }
11
12        while (write < nums.size()) {
13            nums[write++] = 0;
14        }
15    }
16};
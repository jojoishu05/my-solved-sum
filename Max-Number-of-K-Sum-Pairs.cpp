1class Solution {
2public:
3    int maxOperations(vector<int>& nums, int k) {
4        unordered_map<int, int> freq;
5        int operations = 0;
6
7        for (int x : nums) {
8            int need = k - x;
9
10            if (freq[need] > 0) {
11                freq[need]--;
12                operations++;
13            } else {
14                freq[x]++;
15            }
16        }
17
18        return operations;
19    }
20};
1class Solution {
2public:
3    string gcdOfStrings(string str1, string str2) {
4        // Step 1: Check compatibility
5        if (str1 + str2 != str2 + str1) {
6            return "";
7        }
8
9        // Step 2: Compute GCD of lengths
10        int gcdLen = std::gcd(str1.size(), str2.size());
11
12        // Step 3: Return the prefix
13        return str1.substr(0, gcdLen);
14    }
15};
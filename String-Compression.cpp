1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        int write = 0;
5        int i = 0;
6        int n = chars.size();
7
8        while (i < n) {
9            char curr = chars[i];
10            int count = 0;
11
12            // Count group length
13            while (i < n && chars[i] == curr) {
14                i++;
15                count++;
16            }
17
18            // Write character
19            chars[write++] = curr;
20
21            // Write count if > 1
22            if (count > 1) {
23                string cnt = to_string(count);
24                for (char c : cnt) {
25                    chars[write++] = c;
26                }
27            }
28        }
29
30        return write;
31    }
32};
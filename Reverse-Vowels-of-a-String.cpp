1class Solution {
2public:
3    string reverseVowels(string s) {
4        auto isVowel = [](char c) {
5            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
6                   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
7        };
8
9        int left = 0, right = s.size() - 1;
10
11        while (left < right) {
12            while (left < right && !isVowel(s[left])) left++;
13            while (left < right && !isVowel(s[right])) right--;
14
15            if (left < right) {
16                swap(s[left], s[right]);
17                left++;
18                right--;
19            }
20        }
21
22        return s;
23    }
24};
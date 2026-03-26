1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        auto isVowel = [](char c) {
5            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
6        };
7
8        int curr = 0;
9        int maxVowels = 0;
10
11        // First window
12        for (int i = 0; i < k; i++) {
13            if (isVowel(s[i])) curr++;
14        }
15        maxVowels = curr;
16
17        // Slide window
18        for (int i = k; i < s.size(); i++) {
19            if (isVowel(s[i])) curr++;
20            if (isVowel(s[i - k])) curr--;
21            maxVowels = max(maxVowels, curr);
22        }
23
24        return maxVowels;
25    }
26};
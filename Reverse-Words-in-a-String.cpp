1class Solution {
2public:
3    string reverseWords(string s) {
4        vector<string> words;
5        string word;
6
7        for (char c : s) {
8            if (c == ' ') {
9                if (!word.empty()) {
10                    words.push_back(word);
11                    word.clear();
12                }
13            } else {
14                word.push_back(c);
15            }
16        }
17
18        // Add last word if exists
19        if (!word.empty()) {
20            words.push_back(word);
21        }
22
23        // Build result in reverse
24        string result;
25        for (int i = words.size() - 1; i >= 0; --i) {
26            result += words[i];
27            if (i > 0) result += ' ';
28        }
29
30        return result;
31    }
32};
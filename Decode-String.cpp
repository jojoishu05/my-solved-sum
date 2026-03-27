1class Solution {
2public:
3    string decodeString(string s) {
4        stack<int> countStack;
5        stack<string> stringStack;
6        string currStr = "";
7        int num = 0;
8
9        for (char c : s) {
10            if (isdigit(c)) {
11                num = num * 10 + (c - '0');   // build multi-digit number
12            }
13            else if (c == '[') {
14                countStack.push(num);
15                stringStack.push(currStr);
16                num = 0;
17                currStr = "";
18            }
19            else if (c == ']') {
20                int repeat = countStack.top();
21                countStack.pop();
22
23                string temp = stringStack.top();
24                stringStack.pop();
25
26                while (repeat--) {
27                    temp += currStr;
28                }
29                currStr = temp;
30            }
31            else {
32                currStr += c;   // normal character
33            }
34        }
35
36        return currStr;
37    }
38};
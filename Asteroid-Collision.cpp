1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4        stack<int> st;
5
6        for (int ast : asteroids) {
7            bool destroyed = false;
8
9            while (!st.empty() && st.top() > 0 && ast < 0) {
10                if (abs(st.top()) < abs(ast)) {
11                    st.pop();           // top explodes
12                } else if (abs(st.top()) == abs(ast)) {
13                    st.pop();           // both explode
14                    destroyed = true;
15                    break;
16                } else {
17                    destroyed = true;   // current explodes
18                    break;
19                }
20            }
21
22            if (!destroyed) {
23                st.push(ast);
24            }
25        }
26
27        vector<int> result(st.size());
28        for (int i = result.size() - 1; i >= 0; --i) {
29            result[i] = st.top();
30            st.pop();
31        }
32
33        return result;
34    }
35};
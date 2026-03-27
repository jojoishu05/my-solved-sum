1class StockSpanner {
2private:
3    stack<pair<int, int>> st; // {price, span}
4
5public:
6    StockSpanner() {}
7
8    int next(int price) {
9        int span = 1;
10
11        // Merge spans of smaller or equal prices
12        while (!st.empty() && st.top().first <= price) {
13            span += st.top().second;
14            st.pop();
15        }
16
17        st.push({price, span});
18        return span;
19    }
20};
1class Solution {
2public:
3    vector<vector<string>> suggestedProducts(
4        vector<string>& products, string searchWord) {
5
6        sort(products.begin(), products.end());
7        vector<vector<string>> result;
8
9        int l = 0, r = products.size();
10
11        for (int i = 0; i < searchWord.size(); i++) {
12            char c = searchWord[i];
13
14            // Move left pointer
15            while (l < r && (products[l].size() <= i || products[l][i] != c))
16                l++;
17
18            // Move right pointer
19            while (l < r && (products[r - 1].size() <= i || products[r - 1][i] != c))
20                r--;
21
22            vector<string> suggestions;
23            for (int j = l; j < min(l + 3, r); j++) {
24                suggestions.push_back(products[j]);
25            }
26
27            result.push_back(suggestions);
28        }
29
30        return result;
31    }
32};
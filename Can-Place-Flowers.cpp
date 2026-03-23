1#include <vector>
2using namespace std;
3
4class Solution {
5public:
6    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
7        int size = flowerbed.size();
8
9        for (int i = 0; i < size; i++) {
10            if (flowerbed[i] == 0 &&
11                (i == 0 || flowerbed[i - 1] == 0) &&
12                (i == size - 1 || flowerbed[i + 1] == 0)) {
13
14                flowerbed[i] = 1; // plant flower
15                n--;
16
17                if (n <= 0) {
18                    return true;
19                }
20            }
21        }
22        return n <= 0;
23    }
24};
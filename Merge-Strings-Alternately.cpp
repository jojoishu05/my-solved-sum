1class Solution{
2    public:
3    string mergeAlternately(string word1,string word2){
4        string result;
5        int i=0,j=0;
6        while(i<word1.size()||j<word2.size()){
7           if(i<word1.size()){
8            result.push_back(word1[i++]);
9           }
10           if(j<word2.size()){
11            result.push_back(word2[j++]);
12           }
13        }
14return result;
15    }
16
17};
18
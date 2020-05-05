// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/

// Easy

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        unordered_map<char,int> seen;
        for(int i=0;i<n;i++) seen[s[i]]++;
        for(int i=0;i<n;i++){
            if(seen[s[i]] == 1) return i;
        }
        return -1;
    }
};

// Basic freq count question

// T.C = O(N)
// S.C = O(26) ~ O(1) coz only 26 diff characters can be there

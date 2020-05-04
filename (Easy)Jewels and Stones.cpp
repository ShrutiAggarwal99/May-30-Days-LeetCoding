// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/

// Easy 

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> c;
        for(int i=0;i<J.length();i++) c.insert(J[i]);
        
        int cnt = 0;
        for(int i=0;i<S.length();i++){
            if(c.find(S[i]) != c.end()) cnt++;
        }
        return cnt;
    }
};

// Basic use of set 

// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/

// Easy

// Concept: Basic in and out degree of every person

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> in(N+1,0);
        vector<int> out(N+1,0);
        
        for(int i=0;i<trust.size();i++){
            in[trust[i][1]]++;
            out[trust[i][0]]++;
        }
        
        for(int i=1;i<=N;i++){
            if(out[i] == 0 && in[i] == N-1) return i;
        }
        return -1;
    }
};

// T.C = O(n)
// S.C = O(n)

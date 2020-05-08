// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/

// Easy - Medium

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n = coordinates.size();
        double slope = abs((coordinates[1][1]-coordinates[0][1])*1.0/(coordinates[1][0] - coordinates[0][0])), other;
        for(int i=2;i<n;i++){
            other = abs((coordinates[i][1]-coordinates[i-1][1])*1.0/(coordinates[i][0] - coordinates[i-1][0]));
            if(abs(other-slope) > 1e-9) return false; // we should not compare floating point numbers for equality
        }
        return true;
    }
};

// Concept -> Basic Slope concept or Equation of Line can also be used

// T.C = O(n) 
// S.C = O(1)

// Easy
// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st = 1, en = n;
        while(st<en){
            int mid = st+(en-st)/2;
            if(isBadVersion(mid) == false) st = mid + 1;
            else en = mid;
        }
        return st;
    }
};

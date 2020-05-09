// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/

// Easy

1. T.C = O(sqrt(n))
class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while((long long)i*i < (long long)num){
            i++;
        }
        if((long long)i*i == (long long)num) return true;
        return false;
    }
};

2. Avoiding int overflows
class Solution {
public:
    bool isPerfectSquare(int num) {
        double i=1;
        while(i<(num/i)){
            i++;
        }
        if(i==(num/i)) return true;
        return false;
    }
};

3. Binary Search : T.C = O(logn)
class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo = 1, hi = num/2;
        while(lo<hi){
            double mid = lo + (hi-lo)/2;
            if(mid < num/mid) lo = mid + 1;
            else hi = mid;
        }
        if((long long)lo*lo == num) return true;
        return false;
    }
};



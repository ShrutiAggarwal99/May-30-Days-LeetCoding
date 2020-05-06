// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/

// Easy

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> cnt;
        for(int i=0;i<n;i++) cnt[nums[i]]++;
        for(int i=0;i<n;i++){
            if(cnt[nums[i]] > n/2) return nums[i];
        }
        return -1;
    }
};

// Basic use of map (hashtable)
// T.C = O(n) in average case
// S.C = O(n)


// Another way : will work only when majority is present for sure

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, ans = -1;
        for(int i=0;i<n;i++){
            if(cnt == 0) cnt = 1, ans = nums[i];
            else cnt += ans == nums[i] ? 1 : -1;
        }
        return ans;
    }
};

// T.C = O(n)
// S.C = O(1)



// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3327/

// Binary Search Approach - Medium

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st = 0, en = n-1;
        while(st<en){
            int mid = st + (en-st)/2;
            if(nums[mid] == nums[mid^1]) st = mid + 1;
            else en = mid;
        }
        return nums[st];
    }
};

// T.C = O(logn)
// S.C = O(1)


// XOR Approach (does not take advantage of sorted array) - Easy

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(), x = 0;
        for(int i=0;i<n;i++){
            x = x ^ nums[i];
        }
        return x;
    }
};

// T.C = O(n)
// S.C = O(1)

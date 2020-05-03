// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
// Easy

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> freq;
        for(int i=0;i<magazine.length();i++) freq[magazine[i]]++;
        for(int i=0;i<ransomNote.length();i++){
            if(freq[ransomNote[i]] > 0) freq[ransomNote[i]]--;
            else return false;
        }
        return true;
    }
};

// m = magazine.length(), n = ransomNote.length()
// T.C = O(m+n)
// S.C = O(m)
// Concept - freq of characters (map used)

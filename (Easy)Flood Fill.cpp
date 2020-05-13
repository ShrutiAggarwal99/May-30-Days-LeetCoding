// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/

// Easy
// Concept - DFS
// BFS could also be used

class Solution {
private:
    void dfs(int i, int j, int origColor, int newColor, vector<vector<int> > &filledImg){
        int m = filledImg.size(), n = filledImg[0].size();
        
        if(i<0 || i>=m || j<0 || j>=n || filledImg[i][j] != origColor || filledImg[i][j] == newColor) return;
        
        filledImg[i][j] = newColor;
        
        dfs(i+1,j,origColor,newColor,filledImg); 
        dfs(i-1,j,origColor,newColor,filledImg); 
        dfs(i,j-1,origColor,newColor,filledImg); 
        dfs(i,j+1,origColor,newColor,filledImg);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size(), n = image[0].size();
        vector<vector<int> > filledImg(image.begin(),image.end());
        dfs(sr,sc,image[sr][sc],newColor,filledImg);
        return filledImg;
    }
};

// T.C = O(m*n)
// S.C = O(m*n)

// https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/

// Medium

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*,int> > q;
        q.push({root,0});
        vector<pair<int,int> > v;
        if(root->val == x || root->val == y) v.push_back({0,-1});
        while(!q.empty()){
            pair<TreeNode*,int> fp = q.front();
            q.pop();
            TreeNode* fNode = fp.first;
            int d = fp.second;
            if(fNode->left != NULL){
                q.push({fNode->left,d+1});
                if(fNode->left->val == x || fNode->left->val == y) v.push_back({d+1,fNode->val});
            }
            if(fNode->right != NULL){
                q.push({fNode->right,d+1});
                if(fNode->right->val == x || fNode->right->val == y) v.push_back({d+1,fNode->val});
            }
        }
        if(v[0].first == v[1].first && v[0].second != v[1].second) return true;
        return false;
    }
};

// Concept -> Basic BFS on trees concept

// T.C = O(n) -> traversing all nodes twice through BFS
// S.C = O(n) -> using queue to do thr BFS

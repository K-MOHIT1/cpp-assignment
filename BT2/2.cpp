// class Solution {
// public:
//     int level(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+max(level(root->left),level(root->right));
//     }
//     void lorder(TreeNode* root,vector<int>& v,queue<TreeNode*>& q,queue<TreeNode*>& p){
//         while(q.size()>0){
//             TreeNode* temp=q.front();
//             q.pop();
//             v.push_back(temp->val);
//             if(temp->left) p.push(temp->left);
//             if(temp->right)p.push(temp->right);
//         }
//     }
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         int n=level(root);
//         vector<vector<int>> ans;
//         queue<TreeNode*> q;
//         queue<TreeNode*> p;
//         q.push(root);
//         for(int i=1;i<=n;i++){
//             if(i%2!=0){
//                 vector<int> v;
//                 lorder(root,v,q,p);
//                 ans.push_back(v);
//             }
//             else{
//                 vector<int> v;
//                 lorder(root,v,p,q);
//                 ans.push_back(v);
//             }
            
//         }
//         return ans;
//     }
// };
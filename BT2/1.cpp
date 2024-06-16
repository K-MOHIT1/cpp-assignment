// class Solution {
// public:
//     void helper(TreeNode* root,int &maxDia){
//         if(root==NULL) return;
//         int dia=levels(root->left)+levels(root->right);
//         maxDia=max(maxDia,dia);
//         helper(root->left,maxDia);
//         helper(root->right,maxDia);
//     }
//     int levels(TreeNode* root){
//         if(root==NULL) return 0;
//         return 1+max(levels(root->left),levels(root->right));
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         int maxDia=0; //reinitialise
//         helper(root,maxDia);
//         return maxDia;
//     }
// };
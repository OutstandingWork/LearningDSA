int diameter(node* root)
// {
//     if(root==NULL) return 0;
//     if(root->left!=NULL&&root->right!=NULL&&root->left->left==NULL&&root->left->right==NULL) return 3;
//     if(root->left!=NULL&&root->right!=NULL&&(root->left->left!=NULL||root->left->right!=NULL)) return 4;
//     return max((1+diameter(root->left)+diameter(root->right)),max(diameter(root->left),diameter(root->right)));

// }
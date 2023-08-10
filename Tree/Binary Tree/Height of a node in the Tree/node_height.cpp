    // given x and y must be in tree
    // set default height value as -1

    void find_height(TreeNode* root, int x, int level, int &height){
        
        if(root==NULL)
            return;
        
        if(root->val == x){
            height = level;
            return;
        }
        
        find_height(root->left,x,level+1,height);
        find_height(root->right,x,level+1,height); 
        
    }
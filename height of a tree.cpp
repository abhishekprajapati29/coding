int height(struct Node* node){
        if(node == NULL) return 0;
        
        int lefttree = height(node->left);
        int righttree = height(node->right);
        
        return max(lefttree, righttree) + 1;
    }

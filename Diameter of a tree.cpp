int height(Node* root, int& ans){
    if(root == NULL) return 0;
    
    int leftnode = height(root->left, ans);
    int rightnode = height(root->right, ans);
    
    ans = max(ans, 1+leftnode+ rightnode);
    
    return max(leftnode, rightnode) + 1;
}

int diameter(Node* root) {
    int ans = INT_MIN;
    height(root, ans);
    return ans;
}

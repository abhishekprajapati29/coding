vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    if(root == NULL) return v;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        struct Node* tmp = q.front();
        v.push_back(tmp->data);
        q.pop();
        
        if(tmp->right){
            q.push(tmp->right);
        }
        
        
        if(tmp->left){
            q.push(tmp->left);
        }
        
        
        
        
    }
    reverse(v.begin(), v.end());
    
    return v;
}

vector<int> topView(struct Node *root)
{
    vector<int> v;
    map<int, int> m;
    queue<pair<Node* , int>> q;
    if(root == NULL) return v;
    q.push({root, 0});
    
    while(!q.empty()){
        Node* tmp = q.front().first;
        int h = q.front().second;
        q.pop();
        if(!m[h]) m[h] = tmp->data;
        if(tmp->left) q.push({tmp->left, h-1});
        if(tmp->right) q.push({tmp->right, h+1});
    }
    for(auto x:m) v.push_back(x.second);
    return v;
}

vector <int> bottomView(Node *root)
{
    vector<int> v;
   map<int, int> m;
   if(!root) return v;
   queue<pair<Node*, int>> q;
   q.push({root,0});
   
   while(!q.empty()){
       Node* tmp = q.front().first;
       int h = q.front().second;
       q.pop();
       
       m[h] = tmp->data;
       if(tmp->left)  q.push({tmp->left, h-1});
       if(tmp->right) q.push({tmp->right, h+1});
       
   }
   for(auto x: m) v.push_back(x.second);
   return v;
}

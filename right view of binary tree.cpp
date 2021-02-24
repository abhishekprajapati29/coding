vector<int> rightView(Node *root)
{
    vector<int> v ;
   if(root == NULL) return v;
   
   queue<Node*> q;
   q.push(root);
   
   while(!q.empty()){
       int n = q.size();
       
       for(int i=1; i<=n; i++){
           Node* tmp = q.front();
           q.pop();
           
           if(i==n){
               v.push_back(tmp->data);
           }
           
           if(tmp->left) q.push(tmp->left);
           if(tmp->right) q.push(tmp->right);
           
       }
   }
   return v;
}

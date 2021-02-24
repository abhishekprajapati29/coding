vector<int> levelOrder(Node* node)
{
  vector<int> v;
  if(node == NULL) return v;
  
  queue<Node*> q;
  q.push(node);
  
  while(!q.empty()){
      struct Node* tmp = q.front();
      v.push_back(tmp->data);
      q.pop();
      
      if(tmp->left){
          q.push(tmp->left);
      }
      
      if(tmp->right){
          q.push(tmp->right);
      }
      
  }
  return v;
}

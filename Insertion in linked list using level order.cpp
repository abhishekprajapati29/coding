#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left = NULL;
    right = NULL;
  }
};


void inorder(Node* tmp){
  if(tmp== NULL){
    return;
  }
  inorder(tmp->left);
  cout<<tmp->data<<" ";
  inorder(tmp->right);
}

Node* Insertnode(Node* root, int data){
  if(root == NULL){
    root = new Node(data);
    return root;
  }

  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    Node* tmp = q.front();
    q.pop();

    if(tmp->left){
      q.push(tmp->left);
    }
    else{
      tmp->left = new Node(data);
      return root;
    }

    if(tmp->right){
      q.push(tmp->right);
    }
    else{
      tmp->right = new Node(data);
      return root;
    }
  }
  return root;
}


int main(){
  Node* root = new Node(1);
  
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  inorder(root);
  cout<<endl;
  root = Insertnode(root, 10);
  inorder(root);
  return 0;
}

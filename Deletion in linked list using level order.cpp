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

void deletenode(struct Node* root, 
                  struct Node* d_node) 
{ 
    queue<struct Node*> q; 
    q.push(root); 
  
    // Do level order traversal until last node 
    struct Node* temp; 
    while (!q.empty()) { 
        temp = q.front(); 
        q.pop(); 
        if (temp == d_node) { 
            temp = NULL; 
            delete (d_node); 
            return; 
        } 
        if (temp->right) { 
            if (temp->right == d_node) { 
                temp->right = NULL; 
                delete (d_node); 
                return; 
            } 
            else
                q.push(temp->right); 
        } 
  
        if (temp->left) { 
            if (temp->left == d_node) { 
                temp->left = NULL; 
                delete (d_node); 
                return; 
            } 
            else
                q.push(temp->left); 
        } 
    } 
} 

Node* Delete(Node* root, int data){
  if(root == NULL) return NULL;
  if(root->left == NULL && root->right == NULL){
    if(root->data == data){
      return NULL;
    }
    else{
      return root;
    }
  }

  queue<Node*> q;
  q.push(root);
  Node* node ;
  Node* key_node = NULL;

  while(!q.empty()){
    node = q.front();
    q.pop();

    if(node->data == data){
      key_node = node;
    }

    if(node->right){
      q.push(node->right);
    }
    if(node->left){
      q.push(node->left);
    }
  }

  if(key_node != NULL){
    int x = node->data;
    deletenode(root, node);
    key_node->data = x;
  }
}


int main(){
  Node* root = new Node(1);
  
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  inorder(root);
  cout<<endl;
  root = Delete(root, 3);
  inorder(root);
  return 0;
}

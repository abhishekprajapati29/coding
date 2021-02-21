Node *removeDuplicates(Node *root)
{
    Node* curr = root;
    
    while(curr->next != NULL){
        if(curr->data == curr->next->data){
            Node* next_node = curr->next->next;
            free(curr->next);
            curr->next = next_node;
        }
        else{
            curr = curr->next;
        }
    }
    return root;
    
}

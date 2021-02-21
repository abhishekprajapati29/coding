Node * removeDuplicates( Node *head) 
{
    unordered_set<int> s;
    
    Node * curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        if(s.find(curr->data) == s.end()){
            s.insert(curr->data);
            prev = curr;
        }
        else{
            prev->next = curr->next;
            delete (curr);
        }
        curr = prev->next;
    }
    return head;
}

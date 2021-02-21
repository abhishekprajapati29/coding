Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    while(curr!=NULL){
        Node* next_node = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = next_node;
    }
    return prev;
}

Node* addOne(Node *head) 
{
    
    head = reverse(head);
    Node* curr = head;
    
    int carry = 1;
    
    while(carry)
    {
        curr->data += 1;         // adding one to current node
        
        if(curr->data < 10) return reverse(head);
            // if no carry we can reverse back list and return it
        else curr->data = 0;
            // else we continue with taking carry forward
        
        if(curr->next == NULL) break;
            // if, end of list, we break from loop
        else curr = curr->next;
            // else we move to next node
    }
    
    curr->next = new Node(1);  // adding new node for the carried 1
    return reverse(head);
}

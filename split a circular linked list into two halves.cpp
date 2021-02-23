void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node* fast = head;
    Node* slow = head;
    
    if(head == NULL) return;
    
    while(fast->next != head && fast->next->next != head){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    if(fast->next->next == head){
        fast = fast->next;
    }
    
    *head1_ref = head;
    
    if(head->next != head){
        *head2_ref = slow->next;
    }
    
    
    fast->next = slow->next;
    
    slow->next = head;
    
    
}

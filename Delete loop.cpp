void removeLoop(Node* head)
{
    if(!head) return;
    Node* slow = head;
    Node* fast = head->next;
    
    while( fast != slow )
    {
        if( !fast || !fast->next ) return;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    int k = 1;
    fast = fast->next;
    while(fast != slow){
        fast=fast->next;
        k++;
    }
    
    slow = head;
    fast = head;
    for(int i=0; i<k-1; i++){
        fast = fast->next;
    }
    while(slow != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
    
}

int getcount(Node* head){
    int count = 0;
    Node* curr = head;
    
    while(curr!=NULL){
        count++;
        curr = curr->next;
    }
    return count;
}

int getIntersectionPoint(int d, Node* head1, Node* head2){
    Node* first = head1;
    Node* second = head2;
    
    for(int i=0; i<d; i++){
        if(first == NULL) return -1;
        first = first->next;
    }
    
    while(first && second){
        if(first== second){
            return first->data;
        }
        
        first = first->next;
        second = second->next;
    }
    return -1;
}

int intersectPoint(Node* head1, Node* head2)
{
    int c1 = getcount(head1);
    int c2 = getcount(head2);
    
    if(c1>c2){
        int d = c1 - c2;
        return getIntersectionPoint(d, head1, head2);
    }
    else{
        int d = c2 - c1;
        return getIntersectionPoint(d, head2, head1);
    }
}

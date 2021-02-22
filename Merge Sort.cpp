void FrontBackSplit(Node* source, Node** front, Node** end){
    
    Node* fast = source->next;
    Node* slow = source;
    
    while(fast != NULL && fast->next != NULL  ){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    *front = source;
    *end = slow->next;
    slow->next = NULL;
}

Node* sortedmerge(Node* a, Node* b){
    Node* result = NULL;
    if(a==NULL) return b;
    else if(b==NULL) return a;
    
    if(a->data <= b->data){
        result = a;
        result->next = sortedmerge(a->next, b);
    }else{
        result = b;
        result->next = sortedmerge(a, b->next);
    }
    return result;
}

Node* mergeSort(Node* head) {
    Node* curr = head;
    Node* a;
    Node* b;
    
    if((curr == NULL) || (curr->next == NULL) ){
        return curr;
    }
    
    FrontBackSplit(curr, &a, &b);
    
    a = mergeSort(a);
    b = mergeSort(b);
    
    return sortedmerge(a,b);
}

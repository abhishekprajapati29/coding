void append(Node** head, int data){
    Node* new_node = new Node(data);
    
    if(*head == NULL)
    {
        *head = new_node;
        return;
    }
    
    Node* curr = *head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = new_node;
    return;
    
}

Node* findIntersection(Node* head1, Node* head2)
{
    Node* list1 = head1;
    Node* list2 = head2;
    Node* res = NULL;
    
    while(list1 && list2){
        if(list1->data == list2->data){
            append(&res, list1->data);
            list1 = list1->next;
            list2 = list2->next;
        }
        else if(list1->data < list2->data){
            list1 = list1->next;
        }
        else{
            list2 = list2->next;
        }
    }
    return res;
}

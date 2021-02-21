Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void push(Node** head, int data){
    Node* new_data = new Node(data);
    if(*head == NULL){
        *head = new_data;
        return;
    }
    else{
        Node* curr = *head;
        while(curr->next!= NULL){
            curr = curr->next;
        }
        curr->next = new_data;
        return;
    }
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    Node* list1 = reverse(first);
    Node* list2 = reverse(second);
    
    Node* res = NULL ;
    int carry = 0;
    
    while(list1 && list2){
        int val = list1->data+list2->data+carry;
        if(val <10  ){
            push(&res, val);
            carry = 0;
        }
        else{
            int remiander = val % 10;
            push(&res, remiander);
            carry = val/10;
        }
        list1 = list1->next;
        list2 = list2->next;
        
    }
    while(list1 != NULL){
        int val = list1->data+carry;
        if(val <10  ){
            push(&res, val);
            carry=0;
        }
        else{
            int remiander = val % 10;
            push(&res, remiander);
            carry = val/10;
        }
        list1 = list1->next;
    }
    while(list2 != NULL){
        int val = list2->data+carry;
        if(val <10  ){
            push(&res, val);
            carry=0;
        }
        else{
            int remiander = val % 10;
            push(&res, remiander);
            carry = val/10;
        }
        list2 = list2->next;
    }
    
    if(carry > 0){
        push(&res, carry);
    }
    
    return reverse(res);
    
}

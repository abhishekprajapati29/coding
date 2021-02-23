void reverse(Node** head){
    Node* curr=*head;
    Node* prev = NULL;
    while(curr !=NULL){
        Node* next_node = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = next_node;
    }
    *head = prev;
}

bool compareLists(Node* head1, Node* head2) 
{ 
    struct Node* temp1 = head1; 
    struct Node* temp2 = head2; 

    while (temp1 && temp2) { 
        if (temp1->data == temp2->data) { 
            temp1 = temp1->next; 
            temp2 = temp2->next; 
        } 
        else
            return 0; 
    } 

    /* Both are empty reurn 1*/
    if (temp1 == NULL && temp2 == NULL) 
        return 1; 

    /* Will reach here when one is NULL 
    and other is not */
    return 0; 
} 

bool isPalindrome(Node *head)
{
    
    Node* slow = head, * fast = head, *mid = NULL;
    Node* first = head, * second = head, *prev = head;
    bool res = true;
    if (head != NULL && head->next != NULL) {
    while(fast && fast->next){
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    
    if(fast != NULL){
        mid = slow;
        slow = slow->next;
    }
    
    second = slow;
    prev->next = NULL;
    reverse(&second);
    res = compareLists(head, second);
    }
    
    return res;
    
}


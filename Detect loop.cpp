bool detectLoop(Node* head)
{
    Node* slow_p = head, *fast_p = head;
    while(fast_p && fast_p->next){
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if(slow_p == fast_p) return true;
    }
    return false;
}

bool isCircular(Node *head)
{
    if (head == NULL) return true;
   Node* fast = head, * slow = head->next;
   
   while(slow && slow!=fast){
       slow = slow->next;
   }
   return (slow == fast);
}

void removeLoop(Node *&head) {
    if (head == NULL) {
        return ;
    }
    Node *prev = head ;
    Node *fast = head ;
    Node *slow = head ;

    do {
        slow = slow->next ;
        fast = fast->next->next ;
        if (slow == fast) {
            prev->next = NULL ;
            return  ;
        }
        prev = prev->next ;
    }while (fast != NULL) ;
}

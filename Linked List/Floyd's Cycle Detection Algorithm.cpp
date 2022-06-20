bool floyedCycleDetction(Node *head) {
    if (head == NULL) {
        return false ;
    }

    Node *fast = head ;
    Node *slow = head ;

    do {
        slow = slow->next ;
        fast = fast->next->next ;
        if (slow == fast) {
            return true ;
        }
    }while (fast != NULL) ;

    return false ;
}

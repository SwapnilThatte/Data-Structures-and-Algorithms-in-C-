Node *remove_Duplicates_Sorted(Node *&head) {
    if (head == NULL) {
        return NULL;
    }
    Node *curr = head ;
    while (curr != NULL) {
        if (curr->data == curr->next->data and curr->next != NULL) {
            Node *next_next = curr->next->next ;
            Node *nodeToDelete = curr->next ;
            delete(nodeToDelete) ;
            curr->next = next_next ;
        }
        else {
            curr = curr->next ;
        }
    }
    return head ;

}

Node *remove_Duplicates_Unsorted(Node *&head) {
    if (head == NULL or head->next == NULL) {
        return NULL ;
    }
    unordered_set<int> visited ;
    Node *temp = head ;
    Node *prev = NULL ;
    while (temp != NULL) {
        if (visited.find(temp->data) != visited.end()) {
            prev->next = temp->next ;
            delete(temp) ;
        }
        else {
            visited.insert(temp->data) ;
            prev = temp ;
        }
        temp = prev->next ;
    }
    return head ;
}

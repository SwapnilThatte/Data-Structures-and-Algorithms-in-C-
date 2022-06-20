Node *reverseKnodes(Node *&head, int k) {
    // Time complexity => O(n)   Space Complexity => O(n)
    if (head == NULL) {
        return NULL;
    }
    
    // Reverse first K Nodes
    Node *next = NULL ;
    Node *curr = head ;
    Node *prev = NULL ;
    int count = 0 ;
    while (curr != NULL and count < k) {
        next = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = next ;
        count ++ ;
    }

    // Recursion
    if (next != NULL) {
        head->next = reverseKnodes(next, k) ;
    }

    // Returning the head of reversed list
    return prev ;
}

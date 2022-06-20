void reverseListIterative(Node *&head) {
    if (head == NULL or head->next == NULL) {
        return ;
    }
    else {
      Node *prev = NULL ;
      Node *curr = head ;
      Node *forward = NULL ;

      while (curr != NULL) {
          forward = curr->next ;
          curr->next = prev ;
          prev = curr ;
          curr = forward ;
      }
      head = prev ;
    }
}

Node *reverseListRecursive(Node *&head) {
    if (head == NULL or head->next == NULL) {
        return head ;
    }
    else {
        Node *newHead = reverseListRecursive(head->next) ;
        head->next->next = head ;
        head->next = NULL ;
        return newHead ;
    }
}

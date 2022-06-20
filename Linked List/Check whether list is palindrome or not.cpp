bool isPalindrome(Node *&head) {
    
    if (head == NULL and head->next != NULL) {
        return true ;
    }

    // Step 1 : Get mid of linked list
    Node *mid = middleOfList(head) ;
    cout << mid->data << endl;

    Node *temp = mid->next ;
    mid->next = reverseListRecursive(mid->next) ;

    Node *head1 = head ;
    Node *head2 = mid->next ;

    while (head2 != NULL) {
        if (head2->data != head1->data) {
            return false ;
        }
        head1 = head1->next ;
        head2 = head2->next ;
    }

    temp = mid->next ;
    mid->next = reverseListRecursive(temp) ;

    return true ;
}

bool isCircularList(Node *head) {

    //  Time Complexity => O(n) Space Complexity => O(1)

    if (head == NULL or head->next == head) {
        return true ;
    }
    Node *temp = head->next ;

    while (temp != NULL) {
        if (temp == head) {
            return true ;
        }
        temp = temp->next ;
    }
    return false ;
}

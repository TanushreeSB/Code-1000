Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
    // Handle base cases
    if (first == NULL) return second;
    if (second == NULL) return first;

    // Create a dummy node to start the merged list
    Node<int>* dummy = new Node<int>(-1);  // Dummy value
    Node<int>* tail = dummy;

    // Merge while both lists have elements
    while (first != NULL && second != NULL) {
        if (first->data <= second->data) {
            tail->next = first;
            first = first->next;
        } else {
            tail->next = second;
            second = second->next;
        }
        tail = tail->next;
    }

    // Attach the remaining nodes
    if (first != NULL) tail->next = first;
    if (second != NULL) tail->next = second;

    // Save head and delete dummy
    Node<int>* head = dummy->next;
    dummy->next = NULL;
    delete dummy;

    return head;
}

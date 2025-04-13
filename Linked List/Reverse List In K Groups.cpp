int getLength(Node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

Node* kReverse(Node* head, int k) {
    if (head == NULL || k <= 1) {
        return head;
    }

    int len = getLength(head);
    if (len < k) return head; // Don't reverse if fewer than k nodes

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    return prev;
}

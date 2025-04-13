LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if (head == NULL || head->next == NULL) {
        return head; // Edge case: empty list or single node
    }

    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* forward = NULL;

    while (curr != NULL) {
        forward = curr->next;   // Store the next node
        curr->next = prev;      // Reverse the current node's pointer
        prev = curr;            // Move prev and curr forward
        curr = forward;
    }

    return prev; // New head of the reversed list
}

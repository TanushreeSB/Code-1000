#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    // Write your code here
    if (head == NULL) return NULL;

    std::unordered_set<int> seen;
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (seen.find(curr->data) != seen.end()) {
            // Duplicate found, remove current node
            prev->next = curr->next;
            Node* nodeToDelete = curr;
            curr = curr->next;
            delete nodeToDelete;
        } else {
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}

/*

Problem statement
You are given a linked list of N nodes. Your task is to remove the duplicate nodes from the linked list such that every element in the linked list occurs only once i.e. in case an element occurs more than once, only keep its first occurrence in the list.

For example :
Assuming the linked list is 3 -> 2 -> 3 -> 4 -> 2 -> 3 -> NULL.

Number ‘2’ and ‘3’ occurs more than once. Hence we remove the duplicates and keep only their first occurrence. So, our list becomes : 3 -> 2 -> 4 -> NULL.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100   
1 <= N <= 10 ^ 4
1 <= data <= 10 ^ 5 

Where ‘N’ is the number of nodes in the list and 'data' is the value of list nodes.

*/

class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        if (head == NULL) {
        return NULL;
    }
    
    // Create new nodes and insert them next to 
  	// the original nodes
    Node* curr = head;
    while (curr != NULL) {
        Node* newNode = new Node(curr->data);
        newNode->next = curr->next;
        curr->next = newNode;
        curr = newNode->next;
    }
    
    // Set the random pointers of the new nodes
    curr = head;
    while (curr != NULL) {
        if (curr->random != NULL)
            curr->next->random = curr->random->next;
        curr = curr->next->next;
    }
    
    // Separate the new nodes from the original nodes
    curr = head;
    Node* clonedHead = head->next;
    Node* clone = clonedHead;
            while (clone->next != NULL) {
              	
              	// Update the next nodes of original node 
              	// and cloned node
                curr->next = curr->next->next;
                clone->next = clone->next->next;
              	
              	// Move pointers of original as well as  
              	// cloned linked list to their next nodes
                curr = curr->next;
                clone = clone->next;
            }
            curr->next = NULL;
            clone->next = NULL;
            
            return clonedHead;
        }


        // Function to print the linked list
        void printList(Node* head) {
            while (head != NULL) {
                cout << head->data << "(";
              	if(head->random)
                  	cout << head->random->data << ")";
              	else 
                  	cout << "null" << ")";
                
              	if(head->next != NULL)
                  	cout << " -> ";
                head = head->next;
            }
            cout << endl;
        }
    };

/*

Clone List with Next and Random
Difficulty: HardAccuracy: 64.8%Submissions: 109K+Points: 8
You are given a special linked list with n nodes where each node has two pointers a next pointer that points to the next node of the singly linked list, and a random pointer that points to the random node of the linked list.

Construct a copy of this linked list. The copy should consist of the same number of new nodes, where each new node has the value corresponding to its original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list, such that it also represent the same list state. None of the pointers in the new list should point to nodes in the original list.

Return the head of the copied linked list.

NOTE : Original linked list should remain unchanged.

Examples:

Input: head = [[1, 3], [3, 3], [5, NULL], [9, 3]] 

Output: head = [[1, 3], [3, 3], [5, NULL], [9, 3]] 
Explanation: 
Node 1 points to Node 2 as its NEXT and Node 3 as its RANDOM.
Node 2 points to Node 3 as its NEXT and Node 3 as its RANDOM.
Node 3 points to Node 4 as its NEXT and NULL as its RANDOM.
Node 4 points to NULL as its NEXT and Node 3 as its RANDOM.

*/

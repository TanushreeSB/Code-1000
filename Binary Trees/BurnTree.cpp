// C++ program to find the minimum time required
// to burn the complete binary tree
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left, *right;
    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

int minTime(Node *root, int target) {
    
    // Base case
    if (root == nullptr) return -1;
    
    queue<Node*> q;
    q.push(root);
    Node* tar;
    
    // hash map to map the child nodes
    // to their parent nodes
    unordered_map<Node*, Node*> par;
    par[root] = nullptr;
    
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        
        // Set tar = curr if value
        // is equal.
        if (curr->data == target)
            tar = curr;
        
        // map the left child to its 
        // parent
        if (curr->left != nullptr) {
            par[curr->left] = curr;
            q.push(curr->left);
        }
        
        // map the right child to its
        // parent
        if (curr->right != nullptr) {
            par[curr->right] = curr;
            q.push(curr->right);
        }
    }
    
    // hash map to check if a node
    // has been visited or not.
    unordered_map<Node*, bool> vis;
    
    int ans = -1;
    
    q.push(tar);
    
    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            Node* curr = q.front();
            vis[curr] = true;
            q.pop();
            
            // Push the left child node.
            if (curr->left != nullptr && !vis[curr->left])
                q.push(curr->left);
            
            // Push the right child node.
            if (curr->right != nullptr && !vis[curr->right])
                q.push(curr->right);
            
            // Push the parent node.    
            if (par[curr] != nullptr && !vis[par[curr]])
                q.push(par[curr]);
        }
        
        // increment the answer
        ans++;
    }
    
    return ans;
}

int main() {
    
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int target = 2;
    cout << minTime(root, target) << endl;
    
    return 0;
}

// https://www.geeksforgeeks.org/problems/burning-tree/1

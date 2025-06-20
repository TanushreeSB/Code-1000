class Solution {
public:
    Node* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inorderIndexMap;
        int n = inorder.size();

        // Build value-to-index map for inorder traversal
        for (int i = 0; i < n; ++i) {
            inorderIndexMap[inorder[i]] = i;
        }

        int postIndex = n - 1;  // Start from the end of postorder
        return constructTree(inorder, postorder, postIndex, 0, n - 1, inorderIndexMap);
    }

private:
    Node* constructTree(const vector<int>& inorder, const vector<int>& postorder,
                        int& postIndex, int inStart, int inEnd,
                        unordered_map<int, int>& inorderIndexMap) {
        if (inStart > inEnd) return nullptr;

        int currVal = postorder[postIndex--];
        Node* root = new Node(currVal);

        int inIndex = inorderIndexMap[currVal];

        // Build right subtree first
        root->right = constructTree(inorder, postorder, postIndex, inIndex + 1, inEnd, inorderIndexMap);

        // Then build left subtree
        root->left = constructTree(inorder, postorder, postIndex, inStart, inIndex - 1, inorderIndexMap);

        return root;
    }
};

// Binary Tree from Inorder and Postorder: https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

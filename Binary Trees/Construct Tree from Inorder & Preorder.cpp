class Solution {
public:
    Node* buildTree(vector<int> &inorder, vector<int> &preorder) {
        unordered_map<int, int> indexMap;
        int n = inorder.size();
        
        // Build map of inorder values to their indices
        for (int i = 0; i < n; i++) {
            indexMap[inorder[i]] = i;
        }

        int preIndex = 0;
        return constructTree(preorder, inorder, preIndex, 0, n - 1, indexMap);
    }

private:
    Node* constructTree(const vector<int> &preorder, const vector<int> &inorder,
                        int &preIndex, int inStart, int inEnd,
                        unordered_map<int, int> &indexMap) {
        if (inStart > inEnd) return nullptr;

        int currVal = preorder[preIndex++];
        Node* root = new Node(currVal);

        int inIndex = indexMap[currVal];

        root->left = constructTree(preorder, inorder, preIndex, inStart, inIndex - 1, indexMap);
        root->right = constructTree(preorder, inorder, preIndex, inIndex + 1, inEnd, indexMap);

        return root;
    }
};

// Construct Tree from Inorder & Preorder: https://www.geeksforgeeks.org/problems/construct-tree-1/1

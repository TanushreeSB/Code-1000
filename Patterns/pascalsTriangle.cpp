class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // This will hold the entire Pascal's Triangle
        vector<vector<int>> triangle;

        // Loop through each row from 0 to numRows-1
        for (int i = 0; i < numRows; i++) {
            // Create a vector 'row' with size (i+1), all elements initialized to 1
            // This means:
            // - Row 0 will have 1 element,
            // - Row 1 will have 2 elements,
            // - and so on...
            vector<int> row(i + 1, 1);

            // Fill the inner elements of the row (except first and last which are always 1)
            // We start from 1 and go up to i-1 because first and last elements are fixed as 1
            for (int j = 1; j < i; j++) {
                // Calculate the value by adding two elements from the previous row:
                // triangle[i-1][j-1] + triangle[i-1][j]
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            // Add the fully constructed row to the triangle
            triangle.push_back(row);
        }

        // Return the complete Pascal's Triangle after all rows are constructed
        return triangle;
    }
};

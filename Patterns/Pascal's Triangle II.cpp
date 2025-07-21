class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>row(rowIndex+1,1);

        for(int i=1;i<=rowIndex;i++){
            for(int j=i-1;j>0;j--){
                row[j] = row[j] + row[j-1];
            }
        }
        return row;
    }
};

/*

Pascal's Triangle looks like this:
Each number is the sum of the two numbers directly above it from the previous row.

- Function: getRow(int rowIndex) returns the Pascal's Triangle row at the index rowIndex (0-based).
Creates a vector row of size rowIndex + 1.

Initializes all elements to 1.

For example, if rowIndex = 3, row starts as: [1, 1, 1, 1]

- This double loop updates the values inside the vector row to form the correct Pascal's Triangle values.

Outer loop: i goes from 1 to rowIndex.

Inner loop: j goes backward from i - 1 down to 1.

Why loop backwards?

Because when you update row[j], you use row[j - 1] from the previous state of the vector.

Looping backward prevents overwriting values that are needed for the next calculations.

*/


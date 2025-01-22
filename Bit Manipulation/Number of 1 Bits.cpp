int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   
    if(A == 0){
        return 0;
    }
    
    int count = 0;
    while(A){
        A = A & (A - 1);
        count++;
    }
    return count;
}

/*
Write a function that takes an integer and returns the number of 1 bits it has.
Problem Constraints
0 <= A <= 4294967295


Input Format
First and only argument contains integer A


Output Format
Return an integer as the answer


Example Input
Input1:
    11


Example Output
Output1:
3


Example Explanation
Explaination1:
11 is represented as 1101 in binary 
*/

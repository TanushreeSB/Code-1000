class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
          return 1;
        }
        int MSB = log2(n) + 1;
        return (1 << MSB - 1 )^n;
  }
}

/*
The expression ((1 << MSB) - 1) ^ n can be broken down as follows:

Explanation
1 << MSB:

The 1 << MSB operation is a bitwise left shift. It shifts the binary representation of 1 to the left by MSB positions.
This creates a binary number with a single 1 bit followed by MSB zeroes. For example:
If MSB = 3, 1 << 3 results in 1000 in binary (which is 8 in decimal).
(1 << MSB) - 1:

Subtracting 1 from 1 << MSB creates a binary number where all the bits from the least significant bit (LSB) up to MSB - 1 are set to 1.
Continuing the example:
If MSB = 3, (1 << 3) - 1 gives 0111 in binary (which is 7 in decimal).
^ n:

The ^ operator is a bitwise XOR. It performs an exclusive OR operation between corresponding bits of the two numbers.
XOR operation rules:
0 ^ 0 = 0
1 ^ 1 = 0
0 ^ 1 = 1
1 ^ 0 = 1
Full Expression
((1 << MSB) - 1) ^ n essentially flips all the bits of n up to the MSB position (assuming n has its most significant bit at MSB - 1).
This operation can be used to calculate the bitwise complement of n restricted to the first MSB bits.
Example
If n = 5 (binary 0101) and MSB = 3:

1 << MSB = 1 << 3 = 1000 (binary) = 8 (decimal).
(1 << MSB) - 1 = 1000 - 1 = 0111 (binary) = 7 (decimal).
((1 << MSB) - 1) ^ n = 0111 ^ 0101 = 0010 (binary) = 2 (decimal).
So, the result of ((1 << MSB) - 1) ^ n in this case is 2.

*/

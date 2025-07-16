/*Complete the function below*/
void multiply(int A[][100], int B[][100], int C[][100], int N) {
    // add code here.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply matrices A and B, store the result in C
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

/*

Before we start filling C, we set all its values to 0.

This is important because we are going to add values to C[i][j] during multiplication.

➤ Outer loops:
i: rows of matrix A

j: columns of matrix B

➤ Inner loop:
k: used to access elements of the current row in A and the current column in B


*/

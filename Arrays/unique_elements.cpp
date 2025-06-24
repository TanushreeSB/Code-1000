int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

/*
The XOR operation has some special properties that we will use:

a ^ a = 0 (XOR-ing a number with itself cancels it out)
a ^ 0 = a (XOR-ing a number with 0 keeps the number unchanged)
XOR is commutative and associative, meaning the order of applying XOR doesn't matter.


Find Unique element [https://bit.ly/3y01Zdu ]
*/

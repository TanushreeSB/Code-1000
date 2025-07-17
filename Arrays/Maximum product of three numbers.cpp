class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN,max2 = INT_MIN,max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for(int num: nums){
            if(num > max1){
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if(num > max2){
                max3 = max2;
                max2 = num;
            }
            else if(num > max3){
                max3 = num;
            }

            if(num < min1){
                min2 = min1;
                min1 = num;
            }else if (num < min2){
                min2 = num;
            }
        }

        return max(max1 * max2 * max3, max1 * min1 * min2);
    }
};

/*

Explanation: 
max1 = 1st prize (biggest number)

max2 = 2nd prize

max3 = 3rd prize

When a new number num comes:

If it’s bigger than 1st, everyone moves down, and it becomes 1st.

If it’s bigger than 2nd, it takes 2nd place.

If it’s bigger than 3rd, it just becomes 3rd.

And for smallest:
min1 and min2 = 2 most negative numbers

If a new number is smaller than min1, it becomes the new smallest.

*/

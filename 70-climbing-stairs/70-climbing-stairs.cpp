class Solution {
public:
    int climbStairs(int n){
        int temp, one=1, two=1;
        for(int i=0; i<n-1; i++){
            temp = one;
            one = one + two;
            two = temp;
        }
        
        return one;
    }
};
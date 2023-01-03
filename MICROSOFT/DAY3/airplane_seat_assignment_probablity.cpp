//LEETCODE 1227. AIRPLANE SEAT ASSIGNMENT PROBABLITY
//SPACE SOMPLEXITY: O(1)
//TIME COMPLEXITY: O(1)

class Solution {
    public:
    double nthPersonGetsNthSeat(int n) {
       if(n==1) return (double)n;
       else return (double)1/2; 
    }
};

//LEETCODE 2344.MINIMUM DELETIONS TO MAKE ARRAY DIVISIBLE
//TIME COMPLEXITY: O(NLOG(M)+M+N)
//SPACE COMPLEXITY: O(1)


class Solution {
public:
     int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int ans = -1;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int gcd = numsDivide[0];
        for(auto i:numsDivide)
        {
            gcd = __gcd(gcdd , i);
        }
        
        for(int i=0;i<n;++i)
        {
            if(gcdd%nums[i] == 0)
            {
               ans = i;
                break;
            } 
        }
        return ans;
    }
};

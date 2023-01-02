//LEETCODE 396. ROTATE FUNCTION
//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(1)
//DYNAMIC PROGRAMING SLIDING WINDOW PROBLEM




class Solution {
 public:
  int maxRotateFunction(vector<int>& nums){
    int sum = 0;
    int ans,f = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        f += nums[i]*i; 
    }
    ans = f;
    for(int i = n-1; i > 0; --i){
        f += sum - (nums[i]*nums.size());
        ans = max(ans,f);
    } 
    return ans;
  }
};

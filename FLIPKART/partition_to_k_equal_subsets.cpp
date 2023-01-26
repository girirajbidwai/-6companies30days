class Solution {
public:
    bool fun(int start,int &target,int cursum,int k,vector<bool>&vis,vector<int>& nums)
    {
        if(k == 1) return true;
        if(target == cursum) 
            return fun(0,target,0,k-1,vis,nums);
        for(int i = start; i < nums.size(); i++)
        {
            if(vis[i] || cursum+nums[i] > target)
                continue;
            vis[i] = true;
            if(fun(i+1,target,cursum+nums[i],k,vis,nums)){
                return true;
        }
            vis[i] = false;
        while(i+1 < nums.size() && nums[i] == nums[i+1]) i++;
    }
    return false;
}
    bool canPartitionKSubsets(vector<int>& nums, int k) {
    int sum = 0;
    for(auto it:nums) sum += it;
    if(sum % k != 0) return false;
    int target = sum/k;
    vector<bool>vis(nums.size(),false);
    sort(nums.begin(),nums.end());
    return fun(0,target,0,k,vis,nums);
    }
};

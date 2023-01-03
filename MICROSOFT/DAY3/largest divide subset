//LEETCODE 368.LARGEST DIVISIBLE SUBSET 
//APPROACH: BRUTE FORCE
//TIME COMPLEXITY: O(N*2^N)
//SPACE COMPLEXITY: O(N)

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> ans;
        for(int i = 0; i < size(nums); i++) {         
            auto res = solve(nums, i);                
            if(res.size() > ans.size()) ans = res;     
        }
        return ans;
    }
    vector<int> solve(vector<int>& nums, int start) {
        if(start >= nums.size()) return {};                      
        vector<int> ans;
        for(int i = start+1; i < size(nums); i++) {    
            if((nums[i] % nums[start]) != 0) continue;              
            auto res = solve(nums, i);                       
            if(res.size() >= ans.size()) ans = res;               
        }
        ans.push_back(nums[start]);   
        return ans;                                             
    }
};

//APPROACH: MEMOIZATION
//TIME COMPLEXITY: O(N^3)
//SPACE COMPLEXITY: O(N^2)


class Solution {
public:
    unordered_map<int,vector <int>>mp;
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> ans;
        for(int i = 0; i < size(nums); i++) {         
            auto res = solve(nums, i);                
            if(res.size() > ans.size()) ans = res;     
        }
        return ans;
    }
    vector<int> solve(vector<int>& nums, int start) {
        if(start >= nums.size()) return {};                      
        vector<int> ans;
        if(mp.count(start)) return mp[start];
        for(int i = start+1; i < size(nums); i++) {    
            if((nums[i] % nums[start]) != 0) continue;              
            auto res = solve(nums, i);                       
            if(res.size() >= size(dp[start])) mp[start] = res;               
        }
        mp[start].push_back(nums[start]);   
        return mp[start];                                             
    }
};

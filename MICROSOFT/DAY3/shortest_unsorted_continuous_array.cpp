/LEETCODE 581.SHORTEST UNSORTED CONTINUOUS ARRAY
//NOT OPTIMAL SOLUTION DUE TO RUNTIME ERROR



class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        stack<int> st;
        vector<int> temp; 
        int start = 0;
        int end = nums.size();
        int end1 = nums.size()-1;
        int end2 = nums.size()-1;
        if(nums.size() == 2)
        {
            int min = *min_element(nums.begin(),nums.end());
            int max = *max_element(nums.begin(),nums.end());
            if((nums[start] != min) && (nums[end] != max))
               return 2;
        }
        for(int i = 0; i < nums.size()/2;i++){
            int min = *min_element(nums.begin(),nums.end());
            int max = *max_element(nums.begin(),nums.end());
            if(nums[start] == min) {
                for(int j = 0; j < nums.size(); j++){
                    st.push(nums[j]);
                }
                st.pop();
                while(!st.empty()){
                    temp.push_back(st.top());
                    st.pop();
                }
                nums = temp;
            }
            if(nums[end1] == max){
                end  = end2;
                end--;
                nums.pop_back();
            }
            else
                return end-start;
        }
        return 0;
    }
};

//TIME COMPLEXITY: O(NLOGN)
//SPACE COMPLEXIY: O(N)
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int> temp;
        temp = nums;
        sort(temp.begin(),temp.end());
        int n = nums.size();
        int i=0,j=n-1;
        for(;i<n;i++)
        {
            if(nums[i]!=temp[i])
                break;
        }
        for(;j>=0;j--)
        {
            if(nums[j]!=temp[j])
                break;
        }
        int c=0;
        for(int k=i;k<=j;k++)
            c++;
        return c;
    }
};


//TIME COMPLEXITY: O(N)
//SPACE COMPLEXITY: O(1)

class Solution {
    public:
     int findUnsortedSubarray(vector<int> & nums) {
        int end = -1;
        int max = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(max > nums[i]){
                end = i;
            }
            else{
                max = nums[i];
            }
        }
        int start = 0;
        int min = nums[nums.size()-1];
        for(int i =nums.size()-1; i >= 0; i--){
            if(min < nums[i]){ 
                start = i;
            }
        
        else{
            min = nums[i];
        }
    }
        return end - start + 1;
    }
    
};

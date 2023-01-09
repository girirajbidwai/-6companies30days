class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        
        int count = 0, n = points.size();
        for(int i = 0; i < n; i++)
        {
            unorderen_map<int, int> mp;
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                    continue;
                
                int tmp = findDistance(points[i], points[j]);
                if(mp.find(tmp) != mp.end())
                    count += mp[tmp] * 2; 
                
                mp[tmp]++;
            }
        }
         
        return count;
    }
    
    int findDistance(vector<int> &p1, vector<int> &p2)
    {
        return (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]);
    }
};

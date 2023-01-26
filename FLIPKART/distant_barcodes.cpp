class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        if(barcodes.size () <= 1)
            return barcodes;
        unordered_map<int ,int> mp;
        for(auto &it : barcodes)
            mp[it]++;
        priority_queue<pair<int,int>> pq;
        vector<int> res;
        for(auto &it : mp)
            pq.push({it.second,it.first});
        while(pq.top().first > 0)
        {
            pair<int , int> p = pq.top();
            pq.pop();
            
            res.push_back(p.second);
            p.first--;
            pair<int ,int> p2 = pq.top();
            pq.pop();
            if(p2.first > 0)
            {
                res.push_back(p2.second);
                p2.first--;
            }
            pq.push(p);
            pq.push(p2);
        }
        return res;
    }
};

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        set<int> s;
        for(int i : fruits) s.insert(i);
        if(s.size() <= 2) return fruits.size();
        fruits.push_back(1000001);
        int j = 0;
        int n = fruits.size();
        int total = 0;
        int maxi =0;
        vector<int> freq(1000005);
        for(int i = 0; i < n; i++){
            if(freq[fruits[i]] == 0 && total == 2)
            {
                maxi = max(maxi,i-j);
                while(j < i){
                    if(freq[fruits[j]] > 1) freq[fruits[j]]--, j++;
                    else if(freq[fruits[j]] == 1){
                        freq[fruits[j]]--;
                        j++;
                        break;
                    }
                }
                freq[fruits[i]]++;
            }
            else if(freq[fruits[i]] == 0)
            {
                total++;
                freq[fruits[i]]++;
            }
            else freq[fruits[i]]++;
        }
        return maxi;
    }
};

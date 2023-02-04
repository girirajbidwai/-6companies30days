class Solution {
public:
    bool isSubsequence(string s, string word) {
    if(s.length() < word.length()) return false;
    int st = 0, w = 0;
    while(st < s.length() && w < word.length()) {
        if(s[st] == word[w]) {
            st++;
            w++;
        } else {
            st++;
        }
    }
    return (w == word.length());
}
int numMatchingSubseq(string s, vector<string>& words) {
    int count  = 0;
    unordered_map<string, int> mp;
    for(auto &word : words) {
        if(mp.count(word)) {
            count += mp[word];
        } else {
            count += mp[word] = isSubsequence(s, word);
        }
    }
    return count;
    }
};

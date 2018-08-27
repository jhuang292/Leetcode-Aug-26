class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(g.begin(), g.end()); // O(glog(g))
        std::sort(s.begin(), s.end()); // O(slog(s))
        
        int ans = 0;
        int j = 0;
        
        for(int r : g) { // O(g) + O(m)
            while(j<s.size() && s[j] < r) {
                ++j;
            }
            if(j<s.size()) {
                ++ans;
                ++j;
            }
        }
        return ans;
    }
};

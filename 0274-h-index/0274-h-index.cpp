class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        sort(c.begin(), c.end());
        int h = 0;
        for(int i=0; i<n; i++){
            int p = n - i;
            int x = min(c[i], p);
            h = max(h, x);
        }
        return h;
    }
};
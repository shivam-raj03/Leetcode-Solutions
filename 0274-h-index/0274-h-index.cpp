class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        
        //int h = 0;
        vector<int> v(1001, 0);
        for(int i=0; i<n; i++){
            v[c[i]]++;
        }
        int x = 0;
        for(int i=1000; i>=0; i--){
            x += v[i];
            if(x >= i){
                return i;
            }
        }
        return 0;
    }
};
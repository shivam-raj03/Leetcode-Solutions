class Solution {
public:
    
    bool carPooling(vector<vector<int>>& t, int c) {
        
        unordered_map<int, int> p;
        unordered_map<int, int> d;
        int n = t.size();
        for(int i=0; i<n; i++){
            p[t[i][1]] += t[i][0];
            d[t[i][2]] += t[i][0];
        }
        for(int i=0; i<=1000; i++){
            
            c += d[i];
           //cout << i <<' ' <<  c << " d " << d[i] << endl;
            if(c < p[i])
                return false;
            c -= p[i];
            //cout << i << ' ' <<   c << " p " << p[i] << endl;
        }
        return true;
            
        
    }
    
};
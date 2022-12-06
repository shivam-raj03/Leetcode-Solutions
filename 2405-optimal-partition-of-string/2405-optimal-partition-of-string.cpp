class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> m;
        int count =1;
        for(int i=0; i<s.size(); i++){
            if(m[s[i]] > 0){
                m.clear();
                m[s[i]]++;
                count++;
            }
            m[s[i]]++;
            
        }
        return count;    
    }
};
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int n = piles.size();
        for(int i=0; i<n; i++){
            pq.push(piles[i]);
        }
        while(k--){
            int x = pq.top();
            pq.pop();
            x = ceil((float)x/2);
            pq.push(x);
        }
        int count =0;
        while(!pq.empty()){
            count += pq.top();
            pq.pop();
        }
        return count;
    }
};
class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        int n = nums.size();
        long long sum =0;
        for(int i=0; i<n; i++){
            pq.push((double)nums[i]);
            sum += nums[i];
        }
        double x = 0.0;
        cout << sum << endl;
        double  half = (double)sum/2;
        int count =0;
        while(x < half){
            double z = pq.top();
            pq.pop();
            z = z/2;
            x += z;
            pq.push(z);
            cout << x << endl;
            count++;
        }
        double k = 0.0;
        
        while(!pq.empty()){
            k += pq.top();
            pq.pop();
        }
        cout << k << endl;
        return count;
        
    }
};
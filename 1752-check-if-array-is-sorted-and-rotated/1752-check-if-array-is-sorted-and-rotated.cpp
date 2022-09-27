class Solution {
public:
    bool check(vector<int>& nums) {
        queue<int> q1;
        queue<int> q2;
        for(auto x : nums){
            q1.push(x);
        }
        vector<int> t = nums;
        sort(t.begin(), t.end());
        for(auto x : t){
            q2.push(x);
        }
        for(int i=0; i<nums.size(); i++){
            if(q1 == q2) return true;
            int fr = q1.front();
            q1.pop();
            q1.push(fr);
        }
        return false;
    }
};
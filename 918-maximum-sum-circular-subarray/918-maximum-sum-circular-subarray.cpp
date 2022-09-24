class Solution {
public:
    
    int maxSubarray(vector<int>& nums){
        int mx_flg = 0;
        int mx_sum = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            mx_flg = max(mx_flg+nums[i], nums[i]);
            mx_sum = max(mx_sum, mx_flg);
        }
        return mx_sum;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum_arr = accumulate(nums.begin(), nums.end(), 0);
        int max_sum = maxSubarray(nums);
        transform(nums.begin(), nums.end(), nums.begin(), bind1st(std::multiplies<int>(), -1));
        int min_sum = maxSubarray(nums)*-1;
        cout<<"mx sum"<<max_sum<<"\n";
        cout<<"min sum"<<min_sum;
        return max_sum>0? max(max_sum, (sum_arr - min_sum)): max_sum;
    }
};
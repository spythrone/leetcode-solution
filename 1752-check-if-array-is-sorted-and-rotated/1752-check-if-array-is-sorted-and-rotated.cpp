class Solution {
public:
    
    void swap_vector(vector<int>& nums, int start, int end){
        int mid = start + (end - start -1)/2;
        for(int i=start; i<=mid; i++){
            swap(nums[i], nums[end]);
            end--;
        }
    }
    
    bool check(vector<int>& nums) {
        int breakpoint = 0;
        if(nums.size()==1) return true;
        int flag = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                flag =1;
                break;   
            } 
        }
        if(flag == 0) return true;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                breakpoint = i;
                break;
            }
        }
        swap_vector(nums, 0, breakpoint);
        swap_vector(nums, breakpoint+1, nums.size()-1);
        swap_vector(nums, 0, nums.size()-1);
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]) return false;
        }
        return true;
    }
};
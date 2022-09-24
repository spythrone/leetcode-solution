class Solution:
    
    def max_sub_arr(self, nums:List[int]) -> int:
        mx_flg = -30001
        mx_sm = -30001
        for i in nums:
            mx_flg = max(mx_flg+i, i)
            mx_sm = max(mx_flg, mx_sm)
        return mx_sm
    
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        sm_arr = sum(nums)
        mx_sum = self.max_sub_arr(nums)
        min_sum = self.max_sub_arr(list(map(lambda item: item * -1, nums)))*-1
        return  max(mx_sum, (sm_arr - min_sum)) if mx_sum>0 else mx_sum 
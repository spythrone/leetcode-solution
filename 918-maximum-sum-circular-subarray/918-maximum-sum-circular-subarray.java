class Solution {
    
    public int maxSubarraySum(int[] nums){
        int mxFlag = 0;
        int mxSum = Integer.MIN_VALUE;
        for(int i=0; i<nums.length; i++){
            mxFlag = Math.max(nums[i]+mxFlag, nums[i]);
            mxSum = Math.max(mxSum, mxFlag);
        }
        return mxSum;
    }
    
    public int maxSubarraySumCircular(int[] nums) {
        int sumSubarr = IntStream.of(nums).sum();
        int maxSum = maxSubarraySum(nums);
        int minSum = maxSubarraySum(Arrays.stream(nums).map(i -> i * -1).toArray())*-1;
        return maxSum>0? Math.max(maxSum, Math.max(maxSum, sumSubarr-minSum)): maxSum;
    }
}
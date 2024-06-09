class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> prefixSumCount(k, 0); // Count of prefix sums with each remainder
        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum = (prefixSum + num) % k;
            if (prefixSum < 0) // Handle negative remainders
                prefixSum += k;

            count += prefixSumCount[prefixSum];
            prefixSumCount[prefixSum]++;
        }

        // Add the count of subarrays with prefix sum directly divisible by k
        count += prefixSumCount[0];

        return count;
    }
};

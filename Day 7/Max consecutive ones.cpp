class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        nums.push_back(0);
        int n = nums.size();
        int count = 0, m = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else {
                m = max(m, count);
                count = 0;
            }
        }
        return m;
    }
};
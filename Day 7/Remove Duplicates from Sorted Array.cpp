class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 0, b = 0, c = 1;
        int n = nums.size();
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            if (nums[a] == nums[c]) return 1;
            else return 2;
        }
        while (c < n)
        {
            if (nums[c] == nums[b])
            {
                b++; c++;
            }
            else {
                a++;
                nums[a] = nums[c];
                b++; c++;
            }
        }
        return a + 1;
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = 0;
        int i = 0, j = n - 1;
        int ans = 0;
        while (i < j)
        {
            if (height[i] <= height[j])
            {
                if (height[i] > left) left = height[i];
                else ans = ans + left - height[i];
                i++;
            }
            else
            {
                if (height[j] > right) right = height[j];
                else ans = ans + right - height[j];
                j--;
            }
        }
        return ans;
    }
};
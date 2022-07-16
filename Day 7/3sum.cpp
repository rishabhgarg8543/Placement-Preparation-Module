



class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		int n = nums.size();
		vector<vector<int>>ans;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < n; i++)
		{
			if (i > 0)
			{
				if (nums[i] == nums[i - 1]) continue;
			}
			int p = i + 1;
			int q = n - 1;
			int t = -1 * nums[i];
			while (p < q)
			{
				int a = nums[p] + nums[q];
				if (a == t)
				{
					vector<int>temp;
					temp.push_back(-1 * a);
					temp.push_back(nums[p]);
					temp.push_back(nums[q]);
					sort(temp.begin(), temp.end());
					ans.push_back(temp);
					while (p < q && nums[p] == nums[p + 1]) p++;
					while (p < q && nums[q] == nums[q - 1]) q--;
					p++; q--;
				}
				else if (a > t) q--;
				else p++;

			}
		}
		return ans;
	}
};
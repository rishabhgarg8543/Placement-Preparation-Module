
class Solution
{
public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n)
    {
        // your code here
        vector<pair<int, int>>temp;
        for (int i = 0; i < n; i++)
            temp.push_back(make_pair(arr[i].profit, arr[i].dead));
        sort(temp.rbegin(), temp.rend());
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            m = max(m, temp[i].second);
            // cout<<temp[i].first<<" "<<temp[i].second<<" ";
        }
        int hash[m + 1] = {0};
        int count = 0;
        int profit = 0;
        for (int i = 0; i < n; i++)
        {
            int p = temp[i].second;
            for (int j = p; j > 0; j--)
            {
                if (hash[j] == 0)
                {
                    hash[j]++;
                    count++;
                    profit = profit + temp[i].first;
                    break;
                }
            }
        }
        vector<int>ans = {count, profit};
        return ans;
    }
};
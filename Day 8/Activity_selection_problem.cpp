class Solution
{
public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int, int>>ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(make_pair(end[i], start[i]));
        }
        sort(ans.begin(), ans.end());
        int p = ans[0].second;
        int q = ans[0].first;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (ans[i].second > q)
            {
                q = ans[i].first;
                count++;
            }
        }
        return count;
    }
};
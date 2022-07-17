
// T.C - O(N)+O(NLogn)+O(N) ~ O(N)
// S.C - O(N)
#include<bits/stdc++.h>
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
	// Write your code here.
	vector<pair<int, pair<int, int>>>ans;
	int n = start.size();
	for (int i = 0; i < n; i++)
	{
		pair<int, int>temp1;
		temp1 = make_pair(i, start[i]);
		pair<int, pair<int, int> >temp2;
		temp2 = make_pair(end[i], temp1);
		ans.push_back(temp2);
	}
	std::sort(ans.begin(), ans.end());
//     int count=1;
	vector<int>o;
	int temp = ans[0].first;
	o.push_back(ans[0].second.first + 1);
	for (int i = 1; i < n; i++)
	{

		if (ans[i].second.second > temp)
		{
//             count++;
			o.push_back(ans[i].second.first + 1);
			temp = ans[i].first;
		}
		// cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<"\n";

	}
	return o;
}






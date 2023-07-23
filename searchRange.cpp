#include<bits/stdc++.h>
vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	vector<int> ans;
	int n = arr.size();
	int low = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
	int high = upper_bound(arr.begin(), arr.end(), x) - arr.begin() - 1;

	if(low == n || arr[low] != x){
		return {-1, -1};
	}
	ans.push_back(low);
	ans.push_back(high);

	return ans;
}

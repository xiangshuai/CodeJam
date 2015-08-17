#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> twoSum(int sum, vector<int>& nums) {
	vector<int> ret;
	map<int, int> tb;
	int n = nums.size();
	for (int i=0; i<n; i++)
	{
		if (tb.count(sum-nums[i]))
		{
			ret.push_back(tb[sum-nums[i]]);
			ret.push_back(i+1);
			return ret;
		}
		tb[nums[i]] = i+1;
	}
	return ret;
}

int main() {
	freopen("A-small-practice.in", "r", stdin);
	freopen("output_file_name.out","w",stdout);

	int N;
	cin >> N;
	vector<int> nums;
	for (int i=0; i<N; i++)
	{
		int C;
		cin >> C;
		int l;
		cin >> l;
		nums.clear();
		for (int j=0; j<l; j++)
		{
			int item;
			cin >> item;
			nums.push_back(item);
		}
		vector<int> ret = twoSum(C, nums);
		cout << "Case #" << i+1 << ": " << ret[0] << " " << ret[1] << endl;
	}

	return 0;
}
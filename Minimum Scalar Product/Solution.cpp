#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	//freopen("A-small-practice.in", "r", stdin);
	freopen("A-large-practice.in", "r", stdin);
	freopen("output_file_name.out","w",stdout);

	int T;
	cin >> T;

	for (int i=0; i<T; i++)
	{
		int n;
		cin >> n;
		vector<int> v1, v2;
		for (int j=0; j<n; j++)
		{
			int v;
			cin >> v;
			v1.push_back(v);
		}

		for (int j=0; j<n; j++)
		{
			int v;
			cin >> v;
			v2.push_back(v);
		}

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		reverse(v2.begin(), v2.end());

		long long sum = 0;
		for (int j=0; j<n; j++)
		{
			sum += (long long)v1[j]*v2[j];
		}

		cout << "Case #" << i+1 << ": " << sum << endl;
	}

	return 0;
}
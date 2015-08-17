#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string readLine() {
	string s;
	getline(std::cin, s);
	return s;
}

void reverseWords(string& str) {
	int n = str.size();
	if(n<1) return ;
	int index = 0;
	int left = 0;
	int right = n-1;
	while(left<n && str[left]==' ') left++;
	while(right>=0 && str[right]==' ') right--;

	for (int i=left; i<=right; i++)
	{
		if(i>left && str[i]==str[i-1] && str[i]==' ') continue;
		str[index++] = str[i];
	}
	str.resize(index);
	reverse(str.begin(), str.end());
	int word_start = 0;
	for(int i=0; i<index; i++) {
		if (str[i]==' ')
		{
			reverse(str.begin()+word_start, str.begin()+i);
			word_start = i+1;
		}
	}
	reverse(str.begin()+word_start, str.end());
}

int main() {

	freopen("B-large-practice.in", "r", stdin);
	freopen("output_file_name.out","w",stdout);

	int N = stoi(readLine());
	for (int i=0; i<N; i++)
	{
		string str = readLine();
		reverseWords(str);
		cout << "Case #" << i+1 << ": " << str << '\n';
	}
	return 0;
}
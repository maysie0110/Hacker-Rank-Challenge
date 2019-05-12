#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int>p2);

int main() {
	int k, n;
	vector<int> nums;
	cin >> k;
	while (cin >> n) {
		nums.push_back(n);
	}

	map<int, int> mostFreq;

	for (int i = 0; i < nums.size(); i++) {
		mostFreq[nums[i]]++;
	}
	
	vector<pair<int, int>>vec(mostFreq.begin(), mostFreq.end());
	sort(vec.begin(), vec.end(), compare);
	for (int i = 0; i < k; i++) {
		cout << vec[i].first << " ";
	}
	return 0;
}

bool compare(pair<int, int> p1, pair<int, int>p2) {
	if (p1.second == p2.second)
		return p1.first > p2.first;
	return p1.second > p2.second;
}
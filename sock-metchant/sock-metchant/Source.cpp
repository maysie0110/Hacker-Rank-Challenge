#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {

	int n, col, counter = 0;
	int pos = 0;
	bool found = false;
	vector<int>arr;
	vector<int>myQ;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> col;
		arr.push_back(col);
	}

	myQ.push_back(arr[0]);
	for (int i = 1; i < arr.size(); i++) {
		for (int j = 0; j < myQ.size(); j++ & found == false) {
			if (arr[i] == myQ[j]) {
				pos = j;
				//counter++;
				//myQ.erase(myQ.begin() + pos);
				found = true;
			}
		}
		if (found == true) {
			counter++;
			myQ.erase(myQ.begin() + pos);
			found = false;
		}

		else if (found == false)
			myQ.push_back(arr[i]);
	}
	cout << counter;
	return 0;
}
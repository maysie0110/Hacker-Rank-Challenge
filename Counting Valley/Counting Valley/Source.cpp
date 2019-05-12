#include<string>
#include<iostream>
#include <limits>

using namespace std;
int main() {

	int n;
	long int unit = 0;
	int countValley=0;
	string s;

	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	getline(cin, s);
	for (int i = 0; i < n; i++) {
		if (s[i] == 'D')
			unit--;
		else if (s[i] == 'U')
			unit++;
		if (s[i] == 'U' && unit == 0)
			countValley++;
	}
	cout << countValley;
	return 0;
}
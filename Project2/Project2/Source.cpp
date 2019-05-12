//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// Complete the hourglassSum function below.

int main()
{

	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	int sum ;
	int result = -9999;
	for (int i = 0; i < 4; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1]
				+ arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

			if (sum >= result)
				result = sum;
		}
	}

	cout << result << "\n";
	return 0;
}
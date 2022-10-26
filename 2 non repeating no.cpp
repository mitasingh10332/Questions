

#include <bits/stdc++.h>
using namespace std;

void get2NonRepeatingNos(int arr[], int n)
{
	
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		m[arr[i]]++;
	}

	
	cout << "The non-repeating elements are ";
	for (auto& x : m) {
		if (x.second == 1) {
			cout << x.first << " ";
		}
	}
}


int main()
{
	int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	get2NonRepeatingNos(arr, n);
}



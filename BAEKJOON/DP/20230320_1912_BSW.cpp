#include <iostream>
#include <algorithm>
using namespace std;

int n, maxN;
int dp[100001] = { 0 };
int arr[100001] = { 0 };

int main() {
	cin >> n;
		
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	dp[0] = arr[0]; 
	
	for (int i = 1; i < n; i++) {
		dp[i] = max(arr[i] + dp[i-1], arr[i]);
	}

	maxN = dp[0];
	
	for (int i = 0; i < n; i++) {
		if (dp[i] > maxN) maxN = dp[i];
	}
	
	cout << maxN;
}

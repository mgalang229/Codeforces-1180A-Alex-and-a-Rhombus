#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	cout << 2 * n * n - 2 * n + 1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	solve();
	return 0;
}
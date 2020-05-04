/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 10000
//Snippets: bigint, bsearch, graph, splitstring, segtree, delta

using namespace std;

ll N, K;
ll arr[size_1d];

void Input() {
	cin >> N >> K;
	for (ll i = 0; i < N; i++)
		cin >> arr[i];
}

void Solve() {
	bool flg;
	for (ll i = K - 1; i < N; i++) {
		if (arr[i] != arr[K - 1]) {
			cout << "-1";
			return;
		}
	}
	ll idx;
	for (ll i = K - 1; i >= 0; i--)
		if (arr[i] != arr[K - 1]) {
			break;
		}
		else if (arr[i] == arr[K - 1]) {
			idx = i;
		}
	cout << idx << endl;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	//cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}
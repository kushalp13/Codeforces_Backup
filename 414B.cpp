/*May The Force Be With Me*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
#pragma GCC optimize ("Ofast")
#define ll long long
#define MOD 1000000007
#define endl "\n"
#define vll vector<long long>
#define mll map<long long,long long>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define pb push_back
#define f first
#define s second
#define inf INT_MAX
#define size_1d 10000000
#define size_2d 1000
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n, k;

void Input() {
	cin >> n >> k;
}

void Solve() {
	ll a[k][n + 1] = {0};
	vll div[n + 1];
	for (ll i = 1; i <= n; i++) {
		for (ll j = 1; j * j <= i; j++) {
			if (i % j == 0) {
				div[i].pb(j);
				if (j != i / j)div[i].pb(i / j);
			}
		}
	}
	for (ll i = 1; i <= n; i++) a[0][i] = 1;
	for (ll i = 1; i < k; i++) {
		for (ll j = 1; j <= n; j++) {
			for (ll K = 0; K < div[j].size(); K++) a[i][j] = (a[i][j] + a[i - 1][div[j][K]]) % MOD;
		}
	}
	ll ans = 0;
	for (ll i = 1; i <= n; i++)ans = (ans + a[k - 1][i]) % MOD;
	cout << ans;
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
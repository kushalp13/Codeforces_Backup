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
#define rep(i,v,n) for(ll i = v; i < n; i++)
//Snippets: delta, sieve, fastexp, dfs, bfs, dijkstra, floodfill

using namespace std;

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	string a, b;
	cin >> a >> b;
	bool f = true;
	for (ll i = 0; i < n; i++)f &= (b[i] >= a[i]);
	if (!f)cout << -1 << endl;
	else {
		map<pair<char, char>, ll> mp;
		map<char, ll>x, y;
		for (ll i = 0; i < n; i++)mp[ {a[i], b[i]}] = 1, x[a[i]] = 1, y[b[i]] = 1;;
		ll ans = 0;
		for (auto it : mp)if (it.f.f != it.f.s)ans++;
		ans = min(ans, (ll)x.size() + (ll)y.size() - 2);
		cout << ans << endl;

	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll T = 1;
	cin >> T;
	//ll t = 1;
	while (T--) {
		Input();
		//cout << "Case " << t << ": ";
		Solve();
		//t++;
	}
	return 0;
}
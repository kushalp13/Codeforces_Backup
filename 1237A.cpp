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

ll n;

void Input() {
	cin >> n;
}

void Solve() {
	vector<pair<ll, bool>> a(n);
	for (ll i = 0; i < n; i++) cin >> a[i].f, a[i].s = a[i].f % 2;
	ll su = 0;
	vector<pair<ll, bool>> b = a;
	for (ll i = 0; i < n; i++) a[i].f /= 2, su += a[i].f;
	if (!su)for (auto it : a)cout << it.f << endl;
	else {
		for (ll i = 0; i < n; i++) {if (a[i].s)a[i].f = ((b[i].f < 0) ? -1 : 1) * (abs(a[i].f) + 1), su += (a[i].f < 0) ? -1 : 1; if (!su)break;}
		for (auto it : a)cout << it.f << endl;
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
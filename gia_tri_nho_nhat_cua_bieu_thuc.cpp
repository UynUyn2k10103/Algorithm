// #include <bits/stdc++.h>
// #define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define ll long long
// #define ull unsigned long long
// #define fori(i,a,b) for (ll i = a; i < b; i++)
// #define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
// #define pb push_back
// #define mp make_pair
// #define F fist
// #define S second
// using namespace std;

// int n, x;
// int a[1000];
// int trace[1000];
// int nho;

// void print(int k){
// 	trace[a[k]] -- ;
// 	cout << "[";
// 	fori(i, 0, k + 1) {
// 		fori(j,0, trace[a[i]]) cout << a[i] << " ";
// 	}
// 	cout << a[k] << "]";

// }

// void Try(int sum){
// 	if(sum < 0) return;
// 	fori(i, 0 , n){
// 		trace[a[i]] ++;
// 		if(sum - a[i] == 0) {
// 			print(i);
// 		}
// 		else {
// 			Try(sum - a[i]);
// 			trace[a[i]] --;
// 		}
		
// 	}
// }

// void xl (){
// 	cin >> n >> x; nho = -1;
// 	fori(i, 0, n){
// 		cin >> a[i];
// 	}
// 	sort(a, a + n);
// 	Try(x);
// }

// int main(){
// 	fastIO();
// 	int T; 
// 	//T = 1;
// 	cin >> T;
// 	cin.ignore();
// 	while (T -- ){
// 		xl();
// 		cout << "\n";
// 	}
// }
#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

// const ll mod = 1e9 + 7;
// const ll oo = 1e6 + 5;

int n;
vector <ll> a, b;

bool cmp(ll x, ll y){
	return x > y;
}

void xl (){
	cin >> n;

	a.resize(n);
	b.resize(n);

	fori(i,0,n) cin >> a[i];
	sort(a.begin(), a.end());
	fori(i,0,n) cin >> b[i];
	sort(b.begin(), b.end(), cmp);
	
	ll res = 0;

	fori(i,0,n) {
		res += a[i] * b[i];
	}
	cout << res;

	a.clear();
	b.clear();

}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}
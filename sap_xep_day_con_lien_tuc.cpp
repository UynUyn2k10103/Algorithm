#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

int n;
vector <int> a;
priority_queue <int, vector <int>, greater <int> > q;
int k;

void xl(){
	cin >> n; n++;
	a.resize(n);
	fori(i,1,n) {
		cin >> a[i];
		q.push(a[i]);
	}
	int i = 1;
	while(!q.empty()){
		if(a[i] != q.top()){
			cout << i << " ";
			break;
		}
		i ++;
		q.pop();
	}
	while(!q.empty()){
		if(a[i] != q.top()) k = i;
		i ++;
		q.pop();
	}
	cout << k;
}
int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}
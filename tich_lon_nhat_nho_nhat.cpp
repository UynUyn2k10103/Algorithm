#include<bits/stdc++.h>
#define fori(i,a,b) for(long long i = a; i < b; i++)
#define forr(i,a,b) for(long long i = a-1;i >= b; i--)
#define ll long long
using namespace std;

const int oo = 1e6 + 1;
int n, m;
ll res, x, y;

void xl(){
	cin >> n >> m;
	cin >> res;
	fori(i,1,n){
		cin >> x;
		res = max(res, x);
	}
	cin >> y;
	fori(i,1,m){
		cin >> x;
		y = min (x,y);
	}
	cout << res * y;
}

int main(){
	int T;
	cin >> T;
	while (T--){
		xl();
		cout << "\n";
	}
}
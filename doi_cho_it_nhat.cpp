#include<bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
//#define endl '\n'
using namespace std;

vector <ll> a;
int n, res;

void xl(){
	cin >> n; res = 0;
	a.resize(n + 100);
	fori(i,0,n) cin >> a[i];
	fori(i, 0,n - 1){
		int index = i;
		fori(j,i + 1, n){
			if(a[j] < a[index]) index = j;
		}
		if(index != i){
			res ++;
			swap(a[i], a[index]);
		}
	}
	cout << res;
	a.clear();
}

int main(){
	fastIO();
	int T = 1;
	cin >> T;
	while(T--){
		xl();
		cout << "\n";
	}
}
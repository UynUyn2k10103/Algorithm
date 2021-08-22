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

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

int n, k;
vector <int> a;
vector <bool> check;
vector <vector <int> > res;
int c[100][100];

void Try(int vt){
	if(vt == n){
		int sum = 0;
		fori(i, 0, n){
			sum += c[i][a[i]]; 
		}
		if(sum == k) res.pb(a);
		return;
	}
	fori(i, 0, n){
		if(check[i] == 0){
			check[i] = 1;
			a[vt] = i;
			Try(vt + 1);
			check[i] = 0;
		}
	}
}


void xl (){
    cin >> n >> k;
	a.resize(n);
	check.resize(n + 5, 0);
	fori(i, 0, n){
		fori(j, 0, n) cin >> c[i][j];
	}
	Try (0);
	cout << res.size() << "\n";
	fori(i, 0, res.size()){
		fori(j, 0, res[i].size()) cout << res[i][j] + 1 <<" ";
		cout << "\n";
	}
}

int main(){
    fastIO();
    int T; 
    T = 1;
    //cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        //cout << "\n";
    }
}
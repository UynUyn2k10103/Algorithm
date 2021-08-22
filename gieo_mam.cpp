#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

vector <vector <int> > a;
int n, m;
int X[] = {-1, 1, 0, 0};
int Y[] = {0, 0, 1, -1};

bool check (){
	int x, y;
	stack <pair <int, int> > st;
	fori(i, 0, n){
		fori(j, 0, m){
			if(a[i][j] == 2){
                fori(h, 0, 4){
                    x = i + X[h];
                    y = j + Y[h];
                    if(x < n && x >= 0 && y < m && y >= 0 && a[x][y] == 1) st.push(mp(x, y));
                }
            }
		}
	}
	if(st.empty()) return 0;
	pair <int, int> k;
	while(!st.empty())
	{
		k = st.top();
		a[k.F][k.S] = 2;
		st.pop();
	}
	return 1;
}

void xl (){
	cin >> n >> m;
	a.clear();
	a.resize(n);
	int k;
	fori(i, 0, n){
		fori(j, 0, m){
			cin >> k;
			a[i].pb(k);
		}
	}
	ll ans = 0;
	while(check()){
		ans ++;
	}
	fori(i, 0, n){
		fori(j, 0, m){
			if(a[i][j] == 1) {
				cout << "-1";
				return;
			}
		}
	}
	cout << ans;
	


	a.clear();
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
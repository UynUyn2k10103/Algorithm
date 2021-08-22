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

int n, V;
vector <int> a;
vector <int> c;
vector < vector <int> > L;
int ans;

void xl (){
	cin >> n >> V;
	a.clear();
	c.clear();
	a.resize(n);
	c.resize(n);
	fori(i, 0, n) cin >> c[i];
	fori(i, 0, n) cin >> a[i];
	L.clear();
	L.resize(n + 1);
	fori(i, 0, L.size()) L[i].resize(V + 1, 0);
	fori(i, 1, L.size()){
		fori(j, 0, V + 1){
			L[i][j] = L[i - 1][j];
			if(j >= a[i - 1] ) L[i][j] = max(L[i][j], L[i - 1][j - a[i - 1]] + c[i - 1]);
		}
	}
    ans = L[n][V];
	cout << ans << "\n";
    stack <int> st;
    while(n > 0 ){
        if(L[n][V] != L[n - 1][V]){
            st.push(1);
            V -= a[n - 1];
        }
        else st.push(0);
        n--;
    }
    while(!st.empty()){
        cout << st.top() <<" ";
        st.pop();
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
		cout << "\n";
	}
}
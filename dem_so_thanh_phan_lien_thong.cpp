#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
#define endl "\n"
using namespace std;

vector <vector <int> > mtrke;
vector <bool> check;
int v, e, u, n;

void dfs(int x){
    fori(i, 0, mtrke[x].size()){
        v = mtrke[x][i];
        if(check[v] == 0){
            check[v] = 1;
            dfs(v);
        }
    }
}

void xl(){
    cin >> n >> e;
    mtrke.resize(n + 10);
    check.resize(n + 10, 0);
    while(e -- ){
        cin >> u >> v;
        mtrke[u].pb(v);
        mtrke[v].pb(u);
    }
    int res = 0;
    fori(i,1,n + 1){
        if(check[i] == 0) {
            check[i] = 1;
            res ++;
            dfs(i);
        }
    }
    cout << res;
    mtrke.clear();
    check.clear();
}

int main (){
    fastIO();
    int T;
    T = 1;
    cin >> T;
    while (T--){
        xl();
        cout << endl;
    }
}
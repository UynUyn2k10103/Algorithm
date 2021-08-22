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

int v, e, u, m, n;

void xl(){
    cin >> v >> e >> u;
    int check[v + 1] = {0};
    vector < vector <int> > a(v + 1);
    while(e -- ){
        cin >> m >> n;
        a[m].pb(n);
        a[n].pb(m);
    }
    queue <int> q;
    q.push(u);
    check[u] = 1;
    while (!q.empty()){
        v = q.front();
        cout << v << " ";
        q.pop();
        fori(i,0,a[v].size()){
            u = a[v][i];
            if(check[u] == 0){
                check[u] = 1;
                q.push(u);
            }
        }
    }
}

int main (){
    fastIO();
    int T;
    cin >> T;
    while (T--){
        xl ();
        cout << endl;
    }
}
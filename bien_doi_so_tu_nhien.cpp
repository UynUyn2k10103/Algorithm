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
const ll oo = 1e5 + 5;

int n, res;
pair <int, int> u;

void BFS(){
    map<int, bool> m;
    queue < pair<int, int> > q;
    q.push(mp(n,0));
    while(!q.empty()){
        u = q.front(); q.pop();
        if(u.S >= res) return;
        if(u.F == 1){
            res = min(res, u.S);
            continue;
        }

        for(int i = sqrt(u.F); i >= 2; i--){
            if(u.F % i == 0){
                if(m[u.F / i] == 0) {
                    q.push(mp(u.F / i, u.S + 1));
                    m[u.F / i] = 1;
                }
            }
        }
        
        if(m[u.F - 1] == 0) {
            q.push(mp (u.F - 1, u.S + 1));
            m[u.F - 1] = 1;
        }

        
    }
}

void xl (){
    cin >> n; res = 1e9;
    BFS();
    cout << res;
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
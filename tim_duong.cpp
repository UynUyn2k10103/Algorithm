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

int n, m;
vector <vector <char> > L;
vector <vector <int> > vs;
char x;
bool ok;
pair <int, int> u, v;
int huong[] = {0, 1, 2, 3};
int X[] = {0, 0, 1, -1};
int Y[] = {1, -1, 0, 0};

// huong  = 0 --> sang ngang y + 1
// .........1.... sang trai y - 1
// .........2..... xuong x + 1
// .........3..... len x - 1

void Try(int x, int y, pair <int, int> k){
    if(ok || k.S > 2) return;
    if(x == v.F && y == v.S){
        ok = 1;
        return;
    }
    //cout << x << " " << y << " " << k.F << " " << k.S << "\n";
    fori(i, 0, 4){
        if((L[x + X[i]][y + Y[i]] == '.' || L[x + X[i]][y + Y[i]] == 'T') && !vs[x + X[i]][y + Y[i]]){
            vs[x + X[i]][y + Y[i]] = 1;
            if(huong[i] == k.F) Try(x + X[i], y + Y[i], k);
            else Try(x + X[i], y + Y[i], mp(huong[i], k.S + 1));
            vs[x + X[i]][y + Y[i]] = 0;
        }
    }

}

void xl (){
    L.clear(); ok = 0; vs.clear();
    cin >> n >> m; n ++; m ++;
    L.resize (n + 1);
    vs.resize (n + 1);
    fori(i, 0, n + 1){
        vs[i].resize(m + 1, 0);
        fori(j, 0, m + 1){
            if(i == 0 || i == n || j == 0 || j == m) {
                L[i].pb('*');
                continue;
            }
            cin >> x;
            if(x == 'S') u = mp(i, j);
            else if(x == 'T') v = mp(i, j);
            L[i].pb(x);
        }
        
    }
    //cout << u.F << " " << u.S << " " << v.F << " " << v.S << "\n";
    fori(i, 0, 4){
        Try(u.F, u.S, mp(huong[i], 0));
    }
    
    if(ok) cout << "YES";
    else cout << "NO";
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
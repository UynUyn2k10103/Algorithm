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
vector <vector <bool> > v;

int X[] = {-1, 0, 1, -1, 0, 1, -1, 1};
int Y[] = {-1, -1, -1, 1, 1, 1, 0, 0};

void Try(int i, int j){
    fori(k, 0, 8){
        if(v[i + X[k]][j + Y[k]]){
            v[i + X[k]][j + Y[k]] = 0;
            Try(i + X[k], j + Y[k]);
        }
    }
}

void xl (){
    cin >> n >> m; n += 2; m += 2;
    char x;
    v.clear();
    v.resize(n);
    int dem = 0;
    fori(i, 0, n){
        fori(j, 0, m){
            if(i == 0 || j == 0 || i == n - 1 || j == m - 1) v[i].pb(0);
            else {
                cin >> x;
				if(x == 'W') v[i].pb(1);
				else v[i].pb(0);
            }

        }
    }
    fori(i, 0, n){
        fori(j, 0, m){
            if(v[i][j] == 1){
                v[i][j] = 0;
                Try(i, j);
                dem ++;
            }
        }
    }
    cout << dem;
    
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
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

int n, m;
vector < vector <ll> > a;
const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

ll x;

void xl (){
    cin >> n >> m;
    a.resize(n);
    fori(i, 0, n){
        fori(j, 0, m){
            cin >> x;
            a[i].pb(x);
        }
    }
    fori(i, 0, n){
        fori(j, 0, m){
            if(i == 0){
                if(j == 0) continue;
                else a[i][j] += a[i][j-1];
            }
            else{
                if(j == 0) {
                    a[i][j] += a[i - 1][j];
                }
                else{
                    a[i][j] += min (a[i-1][j], min(a[i][j-1], a[i - 1][j - 1]));
                }
            }
        }
    }

    cout << a[n - 1][m - 1];


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
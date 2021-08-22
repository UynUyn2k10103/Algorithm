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

int n, x;
ll k;
vector <bool> vs;
vector <ll> L;
vector <int> a;

void xl (){
    cin >> n >> k;
    L.clear(); a.clear();
    a.resize(n); L.resize(k + 1, 0);
    fori(i, 0, n) {
        cin >> a[i];
    }
    L[0] = 1;
    //fori(i, 0, n) cout << a[i] << " ";
    fori(i, 1, k + 1){
        fori(j, 0, a.size()){
            if(i - a[j] >= 0) {
                L[i] += L[i - a[j]];
                L[i] %= mod;
            }
            
        }
    }
    cout << L[k];
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
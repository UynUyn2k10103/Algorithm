// By Uyen D19DCCN709
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

vector <int> L, a;
int n, tmp;

void xl (){
    cin >> n; tmp = 0;
    a.clear(); L.clear();
    a.resize(n); L.resize(n, 0);
    fori(i, 0, n) cin >> a[i];
    fori(i, 0, n){
        fori(j, 0, i){
            if(a[j] <= a[i]) L[i] = max(L[i], L[j]);
        }
        L[i] ++;
        tmp = max(tmp, L[i]);
    }
    cout << n - tmp;
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
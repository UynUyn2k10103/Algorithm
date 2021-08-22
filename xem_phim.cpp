// By Uyen B19DCCN709
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

int C, n, w;
vector <int> L;

void xl (){
    cin >> C >> n; C ++;
    L.clear();
    L.resize(C, 0);
    L[0] = 1;
    fori(i, 0, n){
        cin >> w;
        forr(j, C, w){
            if(L[j] == 0 && L[j - w] == 1) L[j] = 1; 
        }
    }
    forr(i, C, 0){
        if(L[i]) {
            cout << i;
            return;
        }
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
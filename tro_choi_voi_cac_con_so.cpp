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

int n;
vector <bool> vs;
int a[20];

bool ok(){
    fori(i, 1, n) if(abs(a[i] - a[i - 1]) == 1) return 0;
    return 1;
}

void Try(int vt){
    if(vt == n && ok()) {
        fori(i, 0, n) cout << a[i];
        cout << "\n";
        return;
    }
    fori(i, 1, n + 1){
        if(!vs[i]){
            vs[i] = 1;
            a[vt] = i; 
            Try(vt + 1);
            vs[i] = 0;
        }
    }
}

void xl (){
    cin >> n;
    vs.clear();
    vs.resize(n + 1, 0);
    Try(0);
}

int main(){
    fastIO();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        //cout << "\n";
    }
}
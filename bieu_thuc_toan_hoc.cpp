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
bool Run;
int ok;
vector <ll> v;

void sinh_hoan_vi(int a[], int n){
    int i = n - 1;
    while(a[i] >= a[i + 1] && i > 0) i --;
    if(i == 0) {
        Run = 0;
        return;
    }
    forr(j, n + 1, i + 1){
        if(a[i] < a[j]) {
            swap(a[i], a[j]);
            break;
        }
    }
    sort(a + i + 1, a + n + 1);
}

ll cd(ll x, ll y, int k){
    if(k == 1) return x + y;
    if(k == 2) return x - y;
    return x * y;
}
void caculator(int a[]){
    ll x;
    fori(i, 1, 4){
        fori(j, 1, 4){
            fori(k, 1, 4){
                fori(l, 1, 4){
                    x = cd(cd(cd(cd(v[a[1]], v[a[2]], i), v[a[3]], j), v[a[4]], k), v[a[5]], l);
                    if(x == 23){
                        cout << "YES";
                        ok = 0;
                        return;
                    }
                }
            }
        }
    }
}

void xl (){
    int a[6]; Run = 1; ok = -1;
    int b[4];
    fori(i, 1, 4) b[i] = i;
    fori (i, 1, 6) a[i] = i;
    v.resize(6);
    fori(i, 1, 6) cin >> v[i];
    int dem = 0;
    while (Run) {
        caculator(a);
        if(ok == 0) return;

        sinh_hoan_vi(a, 5);
        
    }
    if(ok) cout << "NO";
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
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

vector <int> isprime;

void find (){
    bool ok;
    fori (i, 2, 202){
        ok = 1;
        fori(j, 2, i){
            if(i % j == 0){
                ok = 0;
                break;
            }
        }
        if(ok) isprime.pb(i);
    }
}

int n, p, s;
vector <vector <int> > ans;
vector <int> a;

void Try(int sum, int vt){
    fori(i, vt, isprime.size()){
        if(sum > s) return;
        if(sum == s){
            if(a.size() == n) ans.pb(a);
            return;
        }
        a.pb(isprime[i]);
        Try(sum + isprime[i], i + 1);
        a.pop_back();
    }
}

void xl (){
    cin >> n >> p >> s;
    ans.clear();
    
    fori(i, 0, isprime.size()){
        if(isprime[i] > p) {
            Try(0, i);
            break;
        }
    }
    
    cout << ans.size() << "\n";
    fori(i, 0, ans.size()){
        fori(j, 0, ans[i].size()){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    fastIO();
    find();
    //fori(i, 0, isprime.size()) cout << isprime[i] <<" ";
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        //cout << "\n";
    }
}
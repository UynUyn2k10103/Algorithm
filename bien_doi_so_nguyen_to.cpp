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
const ll oo = 1e4 + 5;

vector <bool> ktra;
vector <vector <int> > G;
vector <pair <int, string> > a;

string chuyen_doi(int n){
    string tmp = "";
    while(n){
        tmp = char (n % 10 + '0') + tmp;
        n /= 10;
    }
    return tmp;
}

void sang(){
    ktra.resize(oo, 0);
    fori(i, 2, oo){
        if(ktra[i]) continue;
        for(ll j = i * i ; j < oo; j += i){
            ktra[j] = 1;
        }
    }
    fori(i, 1000, 10000){
        if(ktra[i] == 0) a.pb(mp(i, chuyen_doi(i)));
    }
    ktra.clear();

}

bool cmp(string x, string y){
    int dem = 0;
    fori(i, 0, x.size()){
        if(x[i] != y[i]) dem ++;
    }
    return dem == 1;
}

void danh_sach_ke(){
    sang();
    G.resize(a[a.size() - 1].F + 1);
    fori(i, 0, a.size() - 1){
        fori(j, i + 1, a.size()){
            if(cmp(a[i].S, a[j].S)) {
                G[a[i].F].pb(a[j].F);
                G[a[j].F].pb(a[i].F);
            }
        }
    }
    a.clear();
}

int v, S, T;
vector <bool> vs;
pair <int, int> u;

void BFS(){
    vs.clear();
    vs.resize(10000, 0);
    queue <pair <int, int> > q;
    q.push(mp(S, 0));
    vs[S] = 1;
    while (!q.empty()){
        u = q.front(); q.pop();
        if(u.F == T) {
            cout << u.S;
            return;
        }
        fori(i, 0, G[u.F].size()){
            v = G[u.F][i];
            if(!vs[v]) {
                vs[v] = 1;
                q.push(mp(v, u.S + 1));
            }
        }
    }
}

void xl (){
    cin >> S >> T;
    BFS();

    
}

int main(){
    fastIO();
    danh_sach_ke();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}
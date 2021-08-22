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

int dem;

struct family{
	string nameFather, nameSon;
	int ageFather, ageSon;
};

int n;
vector <family> v;

void findSon(string nameFather, int ageFather){
	fori(i, 0, n){
		if(nameFather == v[i].nameFather){
			v[i].ageSon = ageFather - v[i].ageFather;
			findSon(v[i].nameSon, v[i].ageSon);
		}
	}
}

bool cmp(family a, family b){
	if(a.ageSon > b.ageSon) return 1;
	if(a.ageSon == b.ageSon) return a.nameSon < b.nameSon;
	return 0;
}

void xl (){
	cout << "DATASET " << ++dem << "\n";
	cin >> n; 
	v.clear(); v.resize(n);
	fori(i, 0, n) cin >> v[i].nameFather >> v[i].nameSon >> v[i].ageFather;
	findSon("Ted", 100);
	sort(v.begin(), v.end(), cmp);
	fori(i, 0, n) cout << v[i].nameSon << " " << v[i].ageSon << "\n";
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
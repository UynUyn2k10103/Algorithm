#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
/*
0 1 2
3 4 5 6
7 8 9
*/
/*
3 0 2
7 4 1 6
8 5 9
*/
int dx[]={3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int dr[]={0, 4, 1, 3, 8, 5, 2, 7, 9, 6};

map <string, int> dd;

string quay_trai(string s){
    string res = "";
    fori(i,0,10) res += s[dx[i]];
    return res;
}

string quay_phai(string s){
    string res = "";
    fori(i,0,10) res += s[dr[i]];
    return res;
}

void BFS(string a, string b) {
    queue <string> Q;
    queue <string> Q2;
    Q.push(a);
    dd[a]=1;
    while(!Q.empty() ){
        string s = Q.front();
        Q.pop();
        if (s == b) {
            cout << dd[s] - 1;
            return;
        }
        string a1 = quay_trai(s);
        if(dd[a1] == 0){
            Q.push(a1);
            dd[a1] = dd[s] + 1;
        }
        string a2 = quay_phai(s);
        if(dd[a2] == 0){
            Q.push(a2);
            dd[a2] = dd[s] +1;
        }
    }
}
int main(){
    string s="",dich="";
    char a[10];
    fori(i,0,10) {
        cin >> a[i];
        s += a[i];
    }
    dich="1238004765";
    BFS(dich, a);
}

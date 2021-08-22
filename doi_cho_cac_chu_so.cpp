#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>b;i--)
#define ll long long
using namespace std;
int main(){
 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t,k,dd;
	cin>>t;
	string s;
	char maxx;
	while(t--){
		cin>>k>>s;
		fori(i,0,s.size()){
			if(k==0) break;
			maxx=s[i];
			dd=i;
			forr(j,s.size(),i){
				if(s[j]>maxx){
					maxx=s[j];
					dd=j;
				}
			}
			if(dd!=i){
				k--;
				swap(s[i],s[dd]);
			}
		}
		cout<<s<<"\n";
	}
}
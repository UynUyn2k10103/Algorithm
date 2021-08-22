#include <bits/stdc++.h>
using namespace std;
int a[1001];
void print(int a[], int n)
{
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
	cout << "\n";
}
void last_tohop(int n, int k)
{
	int i = k;
	while(a[i - 1] + 1 == a[i] && i) i--;
	if(i == 0){
		for(int i = n - k + 1; i <= n; i++) cout << i << " ";
		cout << "\n";
		return;
	}
	a[i] --;
	for(int j = i + 1; j <= k; j++)
	{
		a[j] = n - k + j;
	}
	print(a,k);
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n,k,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		//n=5;k=3;
		for(int i = 1; i <= k; i++) cin >> a[i];
		last_tohop(n,k);
	}



	return 0;
}
//Liet ke cac to hop chap k cua 1..n: su dung quay lui - BackTrack
#include <iostream>
using namespace std;
int n, k, s[100], i;

void print(){	
	for(int j = 1; j <= k; j++)	cout << s[j];
	cout << " ";
}

void BackTrack(int j){	//Liet ke cac to hop chap k cua 1..n
	for(int i = s[j - 1] + 1; i <= n - k + j; i++){	//Xet cac kha nang cua s[j]
		s[j] = i;					//Thu nhan s[j]
		if(j == k){				//Dat den thanh phan cuoi cung, du 1 to hop: in
			print();
		}
		else BackTrack(j+1);	//Chua du thanh phan: liet ke cac cau hinh con tu j+1
	}
}

void xl(){
	cin >> n >> k;
	BackTrack(1);
}

int main() {
	int T;
	cin >> T;
	while (T--){
		xl();
		cout << "\n";
	}
	return 0;
}
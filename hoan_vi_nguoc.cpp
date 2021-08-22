//Liet ke cac hoan vi cua 1..n: su dung quay lui - BackTrack co dieu kien
#include <iostream>
using namespace std;

int n, s[100], i;
bool used[100];

void print(){	
	for(int j=1; j<=n; j++)	cout << s[j];
	cout << " ";
}

void BackTrack(int j){	//Liet ke cac to hop chap k cua 1..n
	for(int i = n; i >= 1; i--){	//Xet cac kha nang cua s[j]
		if(used[i] == 0){	//Chua xet thi duoc su dung
			s[j] = i;				//Thu nhan s[j]
			used[i] = 1;	//Danh dau: da su dung kha nang i
			if(j == n){			//Dat den thanh phan cuoi cung, du 1 to hop: in
				print();
			}
			else
				BackTrack(j+1);	//Chua du thanh phan: liet ke cac cau hinh con tu j+1
			used[i] = 0;
		}
	}
}

void xl(){
	cin >> n;
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
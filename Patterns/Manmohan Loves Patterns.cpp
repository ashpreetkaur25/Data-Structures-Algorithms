// Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

// 1
// 11
// 111
// 1001
// 11111
// 100001

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			for(int j=1;j<=i;j++){
				if(j==1 || j==i) cout<<'1';
				else cout<<'0';
			}
		}
		else{
			for(int j=1;j<=i;j++){
				cout<<'1';
			}

		}
		cout<<endl;
	}
	return 0;
}

// Take N (number of rows), print the following pattern (for N = 4)
// 0
// 1 1
// 2 3 5
// 8 13 21 34


#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int term1=0;
	int term2=1;
	int fib;
	for(int i=1; i<=n; i++){
		for(int j=1;j<=i;j++){
			if(i==1) cout<<term1<<'\t';
			else if(i==2 and j==1) cout<<term2<<'\t';
			else{
				fib=term1+term2;
				cout<<fib<<'\t';
				term1=term2;
				term2=fib;
			}
		}
		cout<<endl;
	}
	return 0;
}

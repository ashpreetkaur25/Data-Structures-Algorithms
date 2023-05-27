// Take N (number of rows), print the following pattern (for N = 4).

//                        1 
//                      2 3 2
//                    3 4 5 4 3
//                  4 5 6 7 6 5 4

#include<iostream>

using namespace std;

int main() {

	int n;
	cin>>n;

	for(int i=1; i<=n; i++) {

		for(int j=1; j<=n-i; j++) {
			cout << "  ";
		}

		
		int num = i;

		for(int j=1; j<=i; j++) {
			cout << num << " ";
			num++;
		}

		num = num-2;

		for(int j=1; j<=i-1; j++) {
			cout << num << " ";
			num--;
		}

		cout << endl;

	}

	return 0;
}

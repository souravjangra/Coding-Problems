#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(i == 1) {
					if(j == 1) {
							cout << "*";
							continue;
					}
					if(j > 1 && j <= ((n-3)/2)+1) {
						cout << " ";
						continue;
					}
					cout << "*";
			} else if(i>1 && i <= ((n-3)/2)+1) {
					if(j==1) {
							cout << "*";
							continue;
					}
					if(j > 1 && j <= ((n-3)/2)+1) {
							cout << " ";
							continue;
					}
					if(j == ((n-3)/2+2)){
							cout << "*";
					}

			} else if(i == (n/2)+1) {
				cout << "*";
			} else if(i > (n/2)+1 && i < n) {
				if(j <= (n/2)) {
						cout << " ";
						continue;
				} 
				if(j == (n/2)+1) {
						cout << "*";  
						continue;
				}
				if(j > (n/2)+1 && j <= n-1) {
						cout << " ";
						continue;
				}
				if(j == n) {
						cout << "*";
				}
			} else if(i == n) {
					if(j <= (n+1)/2) {
							cout << "*";
							continue;
					}
					if(j > (n+1)/2 && j < n) {
							cout << " ";
							continue;
					}
					if(j == n) {
							cout << "*";
					}
			}
		}
		cout << endl;
	}

	return 0;
}


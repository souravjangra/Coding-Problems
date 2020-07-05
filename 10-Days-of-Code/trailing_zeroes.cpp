#include<iostream>
#include<cmath>
using namespace std;

int trailingZeroes(int n) {
	int ans = 0;
	int i = 5;
	while( (n/i) >= 1) {
		ans += floor(n/i);
		i = i*5;
	}
	return ans;
}

int main() {
	
	int n;
	cin >> n;
	
	cout << trailingZeroes(n) << endl;
	
	return 0;

}


#include <bits/stdc++.h>
using namespace std;

void printStatusOfDoors(int n) {
	for (int i = 1; i <= n; i++) {
		int divisors = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				divisors++;
			}
		}
		if (divisors % 2 == 0) {
			cout << "closed ";
		} else {
			cout << "open ";
		}
	}
}

int main() {
	int n ;
        cin>>n;
	printStatusOfDoors(n);
	return 0;
}

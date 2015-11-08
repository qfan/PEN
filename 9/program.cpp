#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

bool good_sum(long a, long b, long c) {
	return (a + b + c) == 1000;
}

bool good_compare(long a, long b, long c) {
	return 0 < a && a < b && b < c && c < 1000;
}

bool good_pythagorean(long a, long b, long c) {
	return a * a + b * b == c * c;
}

void exit_if_good(long a, long b, long c) {
	if (good_sum(a, b, c) && good_compare(a, b, c) && good_pythagorean(a, b, c)) {
		cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
		exit(0);
	}
}

int main() {
	long a = 1;
	long b = 2;
	long c = 997;
	for (c = 997; c > 0; c--) {
		for (a = 1; a < c && b > a; a++) {
			b = 1000 - c - a;
			exit_if_good(a,b,c);
			cout << "c=" << c << endl;
		}
	}




	cout << "X" << endl;
	return 1;
}
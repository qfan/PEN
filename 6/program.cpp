#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
void print_vec(vector<long> &vec) {
	for (auto &i : vec) {
		cout << i << ", ";
	}
	cout << endl;
}

int main() {
	cout << "Hello" << endl;
	long sum_of_squares = 0;
	long sum = 0;

	for (long i = 1; i <= 100; i++) {
		sum += i;
		sum_of_squares += i * i;
	}
	cout << "sum^2=" << sum*sum << endl;
	cout << "diff=" << sum*sum - sum_of_squares<< endl;

	// geometric series: 1 + 2 + ... + 100 = 
	// 101 + 101 + ... 
	// = 101 * 100 / 2
	sum = 101 * 100 / 2;
	cout << "sum=" << sum << endl;
	cout << "sum^2=" << sum*sum << endl;

	// 1 + 4 + 9 + 16 + ... + 10000
	// there's a formula for that...
	return 0;
}
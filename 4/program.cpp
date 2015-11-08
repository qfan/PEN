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

bool is_palindrome(long num) {
	vector<long> digits;
	while (num != 0) {
		digits.push_back(num % 10);
		num = num / 10;
	}
	for (int i = 0; i < digits.size() / 2; i++) {
		if (digits[i] != digits[digits.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main() {
	cout << "Hello" << endl;
	// cout << is_palindrome(23232) << endl;
	// cout << is_palindrome(234432) << endl;
	// cout << is_palindrome(231432) << endl;
	// cout << is_palindrome(2310032) << endl;
	long max = 0;
	long old_i = 0;
	long old_j = 0;

	for (long i = 999; i >= 100; i--) {
		for (long j = 999; j >= 100; j--) {
			long prod = i * j;
			if (is_palindrome(prod) && prod > max) {
				max = prod;
				old_i = i;
				old_j = j;
			}
		}
	}
	cout << "max=" << max << endl;
	cout << "i=" << old_i << endl;
	cout << "j=" << old_j << endl;
	return 0;
}
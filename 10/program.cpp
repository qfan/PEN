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
static const long first_few[] = {2,3,5,7,11};
vector<long> primes(first_few, first_few + sizeof(first_few) / sizeof(first_few[0]));

bool is_next_prime(long input) {
	for (long &prime : primes) {
		if (input % prime == 0) {
			return false;
		}
	}
	return true;
}

long next_prime() {
	long num = primes.back() + 1;
	while(!is_next_prime(num)) {
		num++;
	}
	primes.push_back(num);
	return num;
}

int main() {
	while (next_prime() < 2000000) {
		// if (primes.size() % 1000 == 0) {
		// 	cout << primes.size() << endl;
		// 	cout << primes.back() << endl;
		// }
	}
	long sum = 0;
	for (long i = primes.size() - 2; i >= 0; i--) {
		sum += primes[i];
	}

	cout << "sum=" << sum << endl;
	return 0;
}
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

// how many factors are there other than
// 1 and input itself?
long count_factors(long input) {
	long count = 0;
	long remaining = input;

	for (long &prime : primes) {
		if (0 == remaining || prime >= remaining) {
			return count;
		} 
		while (remaining % prime == 0) {
			remaining = remaining / prime;
			count ++;
		}
	}
	return count;
}

long next_prime() {
	long num = primes.back() + 1;
	while(count_factors(num)) {
		num++;
	}
	primes.push_back(num);
	return num;
}

int main() {
	while(primes.size() < 10001) {
		next_prime();
	}
	cout << primes.back() << endl;
	//print_vec(primes);
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
void print_vec(vector<long> &vec) {
	for (auto &i : vec) {
		cout << i << ", ";
	}
	cout << endl;
}

int main() {
	cout << "Hello" << endl;
	long num = 600851475143;
	// long num = 2*2*3*3*5*5*7*7*11*11*11*13;
	vector<long> factors;
	long i = 2;
	while (num > 1) {
		if (num % i == 0) {
			num = num / i;
			factors.push_back(i);
		} else {
			i++;
		}
	}

	print_vec(factors);
	return 0;
}
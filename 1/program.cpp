#include <iostream>
using namespace std;

int main() {
	cout << "Hello" << endl;
	int LIMIT = 1000;
	int sum = 0;
	for (int i = 1; i < LIMIT; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
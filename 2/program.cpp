#include <iostream>
using namespace std;

int main() {
	cout << "Hello" << endl;
	long LIMIT = 4000000;
	long sum = 0;
	long previous = 1;
	long current = 1;
	long tmp;
	while (current < LIMIT) {
		if (current % 2 == 0) {
			sum += current;
		}
		tmp = current + previous;
		previous = current;
		current = tmp;
	}
	
	cout << sum << endl;
	return 0;
}
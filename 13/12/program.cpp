#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	long triangle_number = 1;
	long adder = 2;
	while(true) {
		long divisor_count = 0;
		long divisor = 1;
		long divisor_limit = (long) ceil(sqrt(triangle_number));
		long quotient = -1;
		do {
			if (0 == triangle_number % divisor) {
				long quotient = triangle_number / divisor;
				if (divisor < quotient) {
					divisor_count += 2;
				} else if (divisor == quotient) {
					divisor_count ++;
					break;
				}
			}
			divisor ++;
		} while (divisor < divisor_limit);
		if (divisor_count > 500) {
			cout << "count=" << divisor_count << ", number=" << triangle_number << endl;
			break;
		}

		triangle_number = triangle_number + adder;
		adder ++;
	}
	return 0;
}
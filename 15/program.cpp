#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <map>

using namespace std;

unsigned long factorial(long i) {
	unsigned long result = i;
	while (i > 1) {
		result *= (i - 1);
		i--;
	}
	return result;
}

int main() {
	unsigned long x = 1;
	x *= 39;
	x *= 37;
	x *= 33;
	x *= 31;
	x *= 29;
	x *= 25;
	x *= 23;
	x *= 7;
	x *= 8;

	// map<unsigned long, unsigned long> numerator = map<unsigned long, unsigned long> ();
	// map<unsigned long, unsigned long> denominator = map<unsigned long, unsigned long> ();

	// // numerator = 40!
	// for (unsigned long i = 1; i <= 40; i++) {
	// 	auto num = i;
	// 	while (num > 1) {

	// 	}
	// }
	cout << x / 10<< endl;
	return 0;
}
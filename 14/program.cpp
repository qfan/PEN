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

int main() {
	long longest_start = 1;
	long longest_count = 1;
	map<long, long> known = map<long, long>();
	for (long i = 1; i <= 1000000; i++) {
		long x = i;
		long count = 0;
		while (x != 1) {
			if (x % 2) {
				// odd
				x = 3 * x + 1;
			} else {
				// even
				x = x / 2;
			}
			count ++;
			auto it = known.find(x);
			if (it != known.end()) {
				count += it->second;
				break;
			}
		}
		known[i] = count;
		if (count > longest_count) {
			longest_count = count;
			longest_start = i;
		}
	}
cout << longest_start << endl;

	return 0;
}
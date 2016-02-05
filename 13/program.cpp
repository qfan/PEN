#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;
string toStr(int x) {
	stringstream ss;
	ss << x;
	string str = ss.str();
	return str;
}
class LargeNatural {
private:
	string value;
	public:
	LargeNatural(string st) {
		this->value = st;
	}
	LargeNatural add(LargeNatural that) {
		string left = this-> value;
		string right = that.value;
		int leftIdx = left.length() - 1;
		int rightIdx = right.length() - 1;
		cout << "adding " << left << " and " << right << endl;
		string sum = "";
		int carry = 0;
		while (leftIdx >= 0 && rightIdx >= 0) {
			string a = left.substr(leftIdx, 1);
			string b = right.substr(rightIdx, 1);
			int i = (int)strtol(a.c_str(), 0, 10);
			int j = (int)strtol(b.c_str(), 0, 10);
			int k = i + j + carry;
			carry = 0;
			if (k >= 10) {
				carry = k / 10;
				k = k % 10;
			}
			string c = toStr(k);

			sum = c + sum;
			leftIdx --;
			rightIdx --;
		}
		while (leftIdx >= 0) {
			string a = left.substr(leftIdx, 1);
			int i = (int)strtol(a.c_str(), 0, 10);
			int k = i + carry;
			carry = 0;
			if (k >= 10) {
				carry = k / 10;
				k = k % 10;
			}
			string c = toStr(k);
			sum = c + sum;
			leftIdx --;
		}
		while (rightIdx >= 0) {
			string b = right.substr(rightIdx, 1);
			int j = (int)strtol(b.c_str(), 0, 10);
			int k = j + carry;
			carry = 0;
			if (k >= 10) {
				carry = k / 10;
				k = k % 10;
			}
			string c = toStr(k);
			sum = c + sum;
			rightIdx --;
		}
		if (carry > 0) {
			string c = toStr(carry);
			sum = c + sum;
		}
		return LargeNatural(sum);
	}
	virtual std::ostream& dump(std::ostream& o) const{
		return o << "LargeNatural: " << value << "; ";
	}
	

};
std::ostream& operator<<(std::ostream& o, const LargeNatural& b) { return b.dump(o); }

int main() {
	vector<LargeNatural> numbers = vector<LargeNatural>();
	ifstream f("data.txt");

	string line;
	LargeNatural sum = LargeNatural("0");

	while (f >> line) {
		numbers.push_back(LargeNatural(line));
		sum = sum.add(LargeNatural(line));
	}

	// LargeNatural a = LargeNatural("12345");
	// LargeNatural b = LargeNatural("83629");


	// LargeNatural c = a.add(b);
	cout << sum << endl;


	return 0;
}
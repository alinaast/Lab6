#include <iostream>
using namespace std;
int main() {
	double a, b, c, s1, s2;
	int n, s;
	cin >> a >> b >> c;
	s1 = a * b;
	s2 = c * c;
	n = s1 / s2;
	s = s1 - s2 * n;
	cout << n << endl;
	cout << s;
	return 0;
}
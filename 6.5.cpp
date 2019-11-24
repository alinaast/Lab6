#include <iostream>
using namespace std;
int main()
{
	int k, n;
	cin >> k;
	if (k % 100 != 0) {
		n = k / 100 + 1;
	}
	else
		n = k / 100;
	cout << n;
	return 0;
}
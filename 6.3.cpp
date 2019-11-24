#include <iostream>
using namespace std;
int main()
{
	int k, n;
	cin >> k >> n;
	k = k % 7 + n - 1;
	cout << k;
	return 0;
}
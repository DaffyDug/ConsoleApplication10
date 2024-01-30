#include <iostream>
using namespace std;

int stepen(int a, int b)
{
	if (b == 0)
		return 1;
	return stepen(a, b - 1) * a;
}


int main()
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	int n = a + b;

	int width = stepen(c, n);

	int s = 2 * (a + b);
	int ss = s * d;
	cout << ss + width;
}

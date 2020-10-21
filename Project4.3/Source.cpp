#include <iostream>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F ;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|"  << "x" << " |"
		<< "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
	if (a < 0 && x != 0)
		F = a * x * x + b * b * x;
	if (a > 0 && x == 0)
		F = x - (a / (x - c));
	if (!(a < 0 && x != 0) && !(a > 0 && x == 0))
		F = 1 + (x / c);
	cout << "|" << x
		<< " |" << F
		<< " |" << endl;
	x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
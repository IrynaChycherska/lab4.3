#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;


	if (a < 0 && x != 0)
		F = a * x * x + b * b * x;
	if (a > 0 && x == 0)
		F = x - (a / (x - c));
	if (!(a < 0 && x != 0) && !(a > 0 && x == 0))
		F = 1 + (x / c);
	cout << endl;
	cout << " F = " << F << endl;
	cin.get();
	return 0;
}
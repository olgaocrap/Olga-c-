#include <iostream>
using namespace std;
void main()
{
	cout << "enter the POSITIVE lengths of the sides of the triangle in ascending order\n";
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c) // ���������, ���������� �� ����� �����������
	{
		cout << "no such triangle exists";
	}
	else
	{
		if (c * c == (a * a + b * b)) // ��������� ������� ��������
			cout << "rectangular triangle\n";
		else
			if ((a == b) and (b == c)) // ��������� ��������� ���� ������
			{
				cout << "equilateral triangle\n";
			}
			else
			{
				if (c * c > (a * a + b * b))// ��������� �� �������� �������������� �����
				{
					cout << "acute-angled triangle\n";
				}
				else
				{
					cout << "obtuse triangle\n";
				}
				if ((a == c) || (b == c) || (a == b)) // ��������� ��������� ���� ������
				{
					cout << "isosceles triangle\n";
				}
			}
	}
}

#include <iostream>
using namespace std;
void main()
{
	cout << "enter the WHOLE number of crows in the flock\n";
	short N;
	cin >> N; //������ ���������� �����
	if (((N >= 11) and (N <= 19)) || (N % 10 == 0 || N % 10 == 5 || N % 10 == 6 || N % 10 == 7 || N % 10 == 8 || N % 10 == 9))
		/*��������� �������: N �� 11 �� 19, ������� �� ������� �� 10 ����� 0, 5, 6, 7, 8, 9*/
	{
		cout << "zdes " << N << " voron.";
	}
	else
	{
		if (N % 10 == 1) //��������� �������: ������� �� ������� ����� 1
		{
			cout << "zdes " << N << " vorona.";
		}
		else
		{
			cout << "zdes " << N << " vorony.";
		}
	}
}
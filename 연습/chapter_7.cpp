#include <iostream>
using namespace std;
/*		1�� 2�� ���� �ۼ�

int square(int x)
{
	// 1�� ���� �Լ� (�Ϲ� �Լ� ����)
	return x * x;
}

double square(double x)
{
	// 2�� ���� �Լ� (�����ε� ������� �Լ� �����ϱ�)
	return x * x;
}

int main()
{
	int a, s;
	double A, S;

	cout << "������ �Է��ϼ���\n";
	cin >> a;
	s = square(a);
	cout << a << "�� ������ " << s << "�Դϴ�.\n" << "\n";

	cout << "�Ҽ��� �Է��ϼ���\n";
	cin >> A;
	S = square(A);
	cout << A << "�� ������ " << S << "�Դϴ�.\n" << "\n";

	return 0;
}
*/
/*
inline int square(int x) { return x * x; }
inline double square(double x) { return x * x; }

int main()
{
	// 3�� ���� �ζ��� �Լ� �ۼ��ϱ�

	int a, s;
	double A, S;

	cout << "������ �Է��ϼ���\n";
	cin >> a;
	s = square(a);
	cout << a << "�� ������ " << s << "�Դϴ�.\n" << "\n";

	cout << "�Ҽ��� �Է��ϼ���\n";
	cin >> A;
	S = square(A);
	cout << A << "�� ������ " << S << "�Դϴ�.\n" << "\n";


	return 0;
}
*/
/*
template <class T>
T square(T x)
{
	return x * x;
}

int main()
{
	// 4�� ���� ���ø� ��� �����ϱ�

	int a, s;
	double A, S;

	cout << "������ �Է��ϼ���\n";
	cin >> a;
	s = square(a);
	cout << a << "�� ������ " << s << "�Դϴ�.\n" << "\n";

	cout << "�Ҽ��� �Է��ϼ���\n";
	cin >> A;
	S = square(A);
	cout << A << "�� ������ " << S << "�Դϴ�.\n" << "\n";


	return 0;
}
*/

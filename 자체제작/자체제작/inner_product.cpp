#include <iostream>
using namespace std;

// chapter 12 ��� ��ǥ �ڵ� Ȱ�� ~~ ���������� ���� �� ���Ͱ� ���� ��� �ڵ� ����

class VECTOR
{
	private:
		double x_point;
		double y_point;
		double z_point;

	public:
		void setX(double a);
		void setY(double b);// set function = ������ �������� 
		void setZ(double c);// �����ڵ��� ������ 0~10 ->> -50 ~ +50 ���� ����
};

void VECTOR::setX(double a)
{
	if (a >= -50 && a <= 50)
		x_point = a;
	else
	{
		x_point = 0;
		cout << "-50�̻� 50 ������ ����� �Է�.\n";
	}
}

void VECTOR::setY(double b)
{
	if (b >= -50 && b <= 50)
		y_point = b;
	else
	{
		y_point = 0;
		cout << "-50�̻� 50 ������ ����� �Է�.\n";
	}
}

void VECTOR::setZ(double c)
{
	if (c >= -50 && c <= 50)
		z_point = c;
	else
	{
		z_point = 0;
		cout << "-50�̻� 50 ������ ����� �Է�.\n";
	}
}

double absol(double q, double w, double e);

int main()
{
	VECTOR ALICE;
	double x1, y1, z1;
	double x2, y2, z2;
	double abs_1, abs_2, IP, las ;

	cout << "1��_3���� ������ X������ �Է��Ͻʽÿ�.\n";
	cin >> x1;
	ALICE.setX(x1);

	cout << "1��_3���� ������ Y������ �Է��Ͻʽÿ�.\n";
	cin >> y1;
	ALICE.setY(y1);

	cout << "1��_3���� ������ Z������ �Է��Ͻʽÿ�.\n";
	cin >> z1;
	ALICE.setZ(z1);

	cout << "2��_3���� ������ X������ �Է��Ͻʽÿ�.\n";
	cin >> x2;
	ALICE.setX(x2);

	cout << "2��_3���� ������ Y������ �Է��Ͻʽÿ�.\n";
	cin >> y2;
	ALICE.setY(y2);

	cout << "2��_3���� ������ Z������ �Է��Ͻʽÿ�.\n";
	cin >> z2;
	ALICE.setZ(z2);

	cout << "1�� �Էµ� �������ʹ� (" << x1 << " , " << y1 << " , " << z1 <<")\n";
	cout << "2�� �Էµ� �������ʹ� (" << x2 << " , " << y2 << " , " << z2 << ")\n";
	IP = (x1 * x2) + (y1 * y2) + (z1 * z2);
	cout << "���� ���(inner_product) ��� : " << IP << "\n";
	abs_1 = absol(x1, y1, z1);
	abs_2 = absol(x1, y1, z1);
	las = IP / (abs_1 * abs_2);
	cout << "1�� �Է� ���������� ���밪 ��� ��� : " << abs_1 << "\n";
	cout << "2�� �Է� ���������� ���밪 ��� ��� : " << abs_2 << "\n";
	cout << "1��, 2�� ���Ͱ� �̷�� ���� cos�� : " << las << "\n";

	return 0;
}

double absol(double q, double w, double e)  // ���밪 ��� �Լ�
{
	double ans;
	ans = sqrt(q *q + w *w  + e *e);
	return ans;
}
#include <iostream>
using namespace std;

// chapter 12 기반 좌표 코드 활용 ~~ 공간벡터의 내적 및 벡터간 각도 계산 코드 구현

class VECTOR
{
	private:
		double x_point;
		double y_point;
		double z_point;

	public:
		void setX(double a);
		void setY(double b);// set function = 범위내 검증과정 
		void setZ(double c);// 기존코드의 범위는 0~10 ->> -50 ~ +50 으로 수정
};

void VECTOR::setX(double a)
{
	if (a >= -50 && a <= 50)
		x_point = a;
	else
	{
		x_point = 0;
		cout << "-50이상 50 이하의 상수를 입력.\n";
	}
}

void VECTOR::setY(double b)
{
	if (b >= -50 && b <= 50)
		y_point = b;
	else
	{
		y_point = 0;
		cout << "-50이상 50 이하의 상수를 입력.\n";
	}
}

void VECTOR::setZ(double c)
{
	if (c >= -50 && c <= 50)
		z_point = c;
	else
	{
		z_point = 0;
		cout << "-50이상 50 이하의 상수를 입력.\n";
	}
}

double absol(double q, double w, double e);

int main()
{
	VECTOR ALICE;
	double x1, y1, z1;
	double x2, y2, z2;
	double abs_1, abs_2, IP, las ;

	cout << "1차_3차원 벡터의 X성분을 입력하십시오.\n";
	cin >> x1;
	ALICE.setX(x1);

	cout << "1차_3차원 벡터의 Y성분을 입력하십시오.\n";
	cin >> y1;
	ALICE.setY(y1);

	cout << "1차_3차원 벡터의 Z성분을 입력하십시오.\n";
	cin >> z1;
	ALICE.setZ(z1);

	cout << "2차_3차원 벡터의 X성분을 입력하십시오.\n";
	cin >> x2;
	ALICE.setX(x2);

	cout << "2차_3차원 벡터의 Y성분을 입력하십시오.\n";
	cin >> y2;
	ALICE.setY(y2);

	cout << "2차_3차원 벡터의 Z성분을 입력하십시오.\n";
	cin >> z2;
	ALICE.setZ(z2);

	cout << "1차 입력된 공간벡터는 (" << x1 << " , " << y1 << " , " << z1 <<")\n";
	cout << "2차 입력된 공간벡터는 (" << x2 << " , " << y2 << " , " << z2 << ")\n";
	IP = (x1 * x2) + (y1 * y2) + (z1 * z2);
	cout << "내적 계산(inner_product) 결과 : " << IP << "\n";
	abs_1 = absol(x1, y1, z1);
	abs_2 = absol(x1, y1, z1);
	las = IP / (abs_1 * abs_2);
	cout << "1차 입력 공간벡터의 절대값 계산 결과 : " << abs_1 << "\n";
	cout << "2차 입력 공간벡터의 절대값 계산 결과 : " << abs_2 << "\n";
	cout << "1차, 2차 벡터가 이루는 각도 cos값 : " << las << "\n";

	return 0;
}

double absol(double q, double w, double e)  // 절대값 계산 함수
{
	double ans;
	ans = sqrt(q *q + w *w  + e *e);
	return ans;
}
#include <iostream>
using namespace std;
/*		1번 2번 문제 작성

int square(int x)
{
	// 1번 문제 함수 (일반 함수 정의)
	return x * x;
}

double square(double x)
{
	// 2번 문제 함수 (오버로드 방식으로 함수 정의하기)
	return x * x;
}

int main()
{
	int a, s;
	double A, S;

	cout << "정수를 입력하세요\n";
	cin >> a;
	s = square(a);
	cout << a << "의 제곱은 " << s << "입니다.\n" << "\n";

	cout << "소수를 입력하세요\n";
	cin >> A;
	S = square(A);
	cout << A << "의 제곱은 " << S << "입니다.\n" << "\n";

	return 0;
}
*/
/*
inline int square(int x) { return x * x; }
inline double square(double x) { return x * x; }

int main()
{
	// 3번 문제 인라인 함수 작성하기

	int a, s;
	double A, S;

	cout << "정수를 입력하세요\n";
	cin >> a;
	s = square(a);
	cout << a << "의 제곱은 " << s << "입니다.\n" << "\n";

	cout << "소수를 입력하세요\n";
	cin >> A;
	S = square(A);
	cout << A << "의 제곱은 " << S << "입니다.\n" << "\n";


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
	// 4번 문제 템플릿 방법 적용하기

	int a, s;
	double A, S;

	cout << "정수를 입력하세요\n";
	cin >> a;
	s = square(a);
	cout << a << "의 제곱은 " << s << "입니다.\n" << "\n";

	cout << "소수를 입력하세요\n";
	cin >> A;
	S = square(A);
	cout << A << "의 제곱은 " << S << "입니다.\n" << "\n";


	return 0;
}
*/

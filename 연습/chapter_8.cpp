#include <iostream>
using namespace std;

/*
// 2번 문제 포인터 코드
int add(int *p, int *q)
{
	int sum = *p + *q;
	return sum;
}

int main()
{
	int x1, x2;
	int alp;
	int s1, s2;

	cout << "2 과목 분의 점수를 입력하십시오.\n";
	cin >> x1;
	cin >> x2;

	cout << "더할 점수를 입력하십시오. \n";
	cin >> alp;
	cout << alp << " 점을 더했으므로\n";

	s1 = add(&x1, &alp);
	s2 = add(&x2, &alp);

	cout << "과목 1은 " << s1 << "점이 되었습니다.\n";
	cout << "과목 2는 " << s2 << "점이 되었습니다.\n";

	return 0;
}
*/

/*
int add(int& p, int& q)
{
	int sum = p + q;
	return sum;
}
// 3번 문제 레퍼런스 코드

int main()
{
	int x1, x2;
	int alp;
	int s1, s2;

	cout << "2 과목 분의 점수를 입력하십시오.\n";
	cin >> x1;
	cin >> x2;

	cout << "더할 점수를 입력하십시오. \n";
	cin >> alp;
	cout << alp << " 점을 더했으므로\n";

	s1 = add(x1, alp);
	s2 = add(x2, alp);

	cout << "과목 1은 " << s1 << "점이 되었습니다.\n";
	cout << "과목 2는 " << s2 << "점이 되었습니다.\n";

	return 0;
}
*/
#include <iostream>
#include <cstring>
using namespace std;
/*
int max(int x[]);

int main()	// 1번 문제 코드
{
	int x[5], y;
	cout << "시험 점수를 입력하십시오. \n";
	int i;

	for (i = 0; i < 5; i++)
	{
		cin >> x[i];
	}

	y = max(x);
		cout << "가장 높은 점수는 " << y << "입니다.\n";

	return 0;
}

int max(int x[])
{
	int m = x[0];

	for (int a = 1; a < 5; a++)
	{
		if (x[0] < x[a])
			m = x[a];
	}
	return m;
}
*/

/*
int length(char* str);

int main()		//2번 문제 코드 작성
{
	char xp[10];
	int anw;
	cout << "문자열을 입력하십시오.\n";
	cin >> xp;

	anw = length(xp);
	cout << "문자열의 길이는 " << anw << " 입니다.\n\n";

	return 0;
}

int length(char* str)
{
	int ans;
	ans = strlen(str);
	
	//int i = 0;
	//while(str[i])
	//{
	//i++;
	//}
	//return i;
	
	return ans;
}
*/
/*
int count(char str[], char ch);

int main()	// 3번 문제 코드 작성
{
	char qwe[20], er;
	int ans;
	cout << "문자열을 입력하십시오.\n";
	cin >> qwe;

	cout << "문자열에서 검색할 문자를 입력하십시오.\n";
	cin >> er;

	ans = count(qwe, er);

	cout << qwe << "안에 " << er << " 은 총 " << ans << " 개 있습니다.\n";

	return 0;
}

int count(char str[], char ch)
{
	int numb = 0;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
			numb++;
	}

	return numb;
}
*/
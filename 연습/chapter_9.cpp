#include <iostream>
#include <cstring>
using namespace std;
/*
int max(int x[]);

int main()	// 1�� ���� �ڵ�
{
	int x[5], y;
	cout << "���� ������ �Է��Ͻʽÿ�. \n";
	int i;

	for (i = 0; i < 5; i++)
	{
		cin >> x[i];
	}

	y = max(x);
		cout << "���� ���� ������ " << y << "�Դϴ�.\n";

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

int main()		//2�� ���� �ڵ� �ۼ�
{
	char xp[10];
	int anw;
	cout << "���ڿ��� �Է��Ͻʽÿ�.\n";
	cin >> xp;

	anw = length(xp);
	cout << "���ڿ��� ���̴� " << anw << " �Դϴ�.\n\n";

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

int main()	// 3�� ���� �ڵ� �ۼ�
{
	char qwe[20], er;
	int ans;
	cout << "���ڿ��� �Է��Ͻʽÿ�.\n";
	cin >> qwe;

	cout << "���ڿ����� �˻��� ���ڸ� �Է��Ͻʽÿ�.\n";
	cin >> er;

	ans = count(qwe, er);

	cout << qwe << "�ȿ� " << er << " �� �� " << ans << " �� �ֽ��ϴ�.\n";

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
#include <bits/stdc++.h>
using namespace std;
int c[20];
int ans[11];
int n, cnt,sum;

struct node
{
	int type1, type2, left;
	node(int a = 0, int b = 0, int c = -1) : type1(a), type2(b), left(c){};
} s[10005];

void fun(int I, node a)
{
	if (I == n - 1)
	{
		s[cnt++] = a;
		return;
	}
	else if (I > n - 1)
	{
		return;
	}
	int i = I;
	if (c[i] == c[i + 1])
		fun(i + 2, node(a.type1 + 1, a.type2, a.left));
	if ((c[i] == c[i + 1] - 1 && c[i] == c[i + 2] - 2) || (c[i] == c[i + 1] && c[i] == c[i + 2]))
		fun(i + 3, node(a.type1, a.type2 + 1, a.left));
	if (a.left == -1)
		if (c[i] == c[i + 1] - 1)
			fun(i + 2, node(a.type1, a.type2, c[i] * 10 + c[i + 1]));
	fun(i + 1, node(a.type1, a.type2, c[i]));

	return;
}

int main()
{
	string str;
	cin >> str;
	int type1 = 0, type2 = 0; // type1对子 type2顺子/刻子
	for (int i = 0; i < str.size(); i++)
		c[i] = str[i] - '0';
	n = str.size();
	// 判断对子
	for (int i = 0; i < n - 1; i++)
	{
		if (c[i] == c[i + 1])
			type1++;
	}
	// 判断顺子/刻子
	for (int i = 0; i < n - 2; i++)
	{
		if (c[i] == c[i + 1] && c[i] == c[i + 2])
			type2++;
		if (c[i] == c[i + 1] - 1 && c[i] == c[i + 2] - 2)
			type2++;
	}
	// 判断是否是一类
	if (type1 == 6)
	{
		for (int i = 0; i < n - 1; i++)
			if (c[i] != c[i + 1])
			{
				cout << i << endl;
				return 0;
			}
		cout << c[n - 1] << endl;
		return 0;
	}
	// 判断是否是二类
	else
	{
		fun(0, node(0, 0, -1));
		for (int i = 0; i < cnt; i++)
		{
			if (s[i].type1 == 0 && s[i].type2 == 4)
			{
				ans[s[i].left]++;
				sum++;
			}
			else if (s[i].type1 == 1 && s[i].type2 == 3)
			{
				ans[(s[i].left / 10) + 1]++;
				ans[(s[i].left % 10) - 1]++;
				sum++;
			}
		}
		if (sum==0)
			cout << "tenpaishimasen" << endl;
		else
			for (int i = 0; i < 10; i++)
				if(ans[i])
					cout << i;
	}
	return 0;
}

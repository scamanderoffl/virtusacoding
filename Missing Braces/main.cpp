#include <bits/stdc++.h>

using namespace std;

char findClosing(char c)
{
	if (c == '{')
		return '}';
	return -1;
}

bool check(char expr[], int n)
{
	if (n == 0)
		return true;
	if (n == 1)
		return false;
	if (expr[0] == '}')
		return false;
	char closing = findClosing(expr[0]);
	int i, count = 0;
	for (i = 1; i < n; i++) {
		if (expr[i] == expr[0])
			count++;
		if (expr[i] == closing) {
			if (count == 0)
				break;
			count--;
		}
	}

	if (i == n)
		return false;

	if (i == 1)
		return check(expr + 2, n - 2);

	return check(expr + 1, i - 1) && check(expr + i + 1, n - i - 1);
}

int main()
{
	char expr[100];
	cin.getline(expr,100);
	int n = strlen(expr);
	if (check(expr, n))
		cout << "correct";
	else
		cout << "error";
		
	return 0;
}
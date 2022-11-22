#include <iostream>
using namespace std;

string res;

string pin(int n, int p);
char int_to_char(int a);

int main()
{
	int N, p;
	cin >> N;
	cin >> p;
	cout << pin(N, p);
	return 0;
}

string pin(int n, int p)
{
	if (n == 0)
	{
		return res;
	}
	pin(n / p, p);
	return res += int_to_char(n % p);
}



char int_to_char(int a)
{
	if (a > 9)
	{
		return char(a) + '7';
	}
	return char(a) + '0';
}

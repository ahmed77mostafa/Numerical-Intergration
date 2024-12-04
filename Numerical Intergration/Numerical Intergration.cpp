#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a, b;
	int n;
	cin >> a >> b >> n;
	float h = (b - a) / n;
	for (int i = 0; i <= n; i++)
	{
		cout << "x" << i << ":" << setprecision(2) << a << " ";
		a += h;
	}

}

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
cout << "vvedite chislo" << endl;
long a, b;
int c=1,d=0;
cin >> a;
cout << a << " = ";
while (c * 10 <= fabs(a))
{
	c *= 10;
	++d;
}
while (c != 0)
{
	b = a / c;
	
	a %= c;
	c /= 10;
	cout << b << "*10^" << d;
	if (d != 0) 
	{
		cout << " + ";
	}
	else
	{
		break;
	}
	--d;
}
return 32;
}
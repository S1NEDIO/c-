#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int a, b, c;
	cout << "Input a" << endl;
	cin >> a;
	cout << "Input b" << endl;
	cin >> b;
	cout << "Input c " << endl;
	cin >> c;
	bool res;
	res = (pow(b, 2) - 4 * a*c == 0);
	cout << res << endl;
	system("pause");
} 

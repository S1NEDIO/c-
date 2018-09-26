#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int num1, num2;
	cout << "Input num1" << endl;
	cin >> num1;
	cout << "Input num2" << endl;
	cin >> num2;
	bool res;
	res = (num1 == pow(num2, 2)) || (num2 == pow(num1, 2));
	cout << res << endl;
	system("pause");
}

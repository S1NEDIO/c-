#include<iostream>
using namespace std;
void main()
{
	int num1, num2;
	cout << "Input num1" << endl;
	cin >> num1;
	cout << "input num2" << endl;
	cin >> num2;
	bool res;
	res = (num1 % 2 ==0) && (num1 < 0) && (num2 % 2 == 0) && (num2 < 0);
	cout << res << endl;
	system("pause");
}

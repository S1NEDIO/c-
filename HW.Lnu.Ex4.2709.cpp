#include<iostream>
using namespace std;
void main()
{
	int num1, num2;
	cout << "Input num1" << endl;
	cin >> num1;
	cout << "Input num2" << endl;
	cin >> num2;
	bool res;
	res = (num1 + num2 >= 50) && (num1 + num2 <= 1000);
	cout << res << endl;
	system("pause");
}

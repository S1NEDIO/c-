#include<iostream>
using namespace std;
void main()
{
	float a;
	int b;
	cout << "Input a" << endl;
	cin >> a;
	b = a*1000;
	b = b % 100;
	cout << b<<endl;
	system("pause");
}

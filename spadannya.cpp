#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	const int size = 10;
	bool flag = false;
	double mass[size];
	cout << "\nInput " << size << " element of massive\n";
	for (int i = 0; i < size; i++)
	{
		cout << "A [ " << i << " ]= ";
		cin >> mass[i];
	}
	cout << "\n\nMassive whice you inputed:\n\n";

	for (int i = 0; i < size; i++)
		//setw - розмір між елементами масиву
		cout << setw(4) << mass[i];

	while (!flag)
	{
		flag = true;

		for (int i = 0; i < size - 1; i++)
			if (mass[i] < mass[i + 1])
			{
				//переставляємо сусідні елементи за допомогою swap
				swap(mass[i], mass[i + 1]);
				flag = false;
			}
	}

	cout << "\n\nSorted massive:\n\n";

	for (int i = 0; i < size; i++)
		cout << setw(4) << mass[i];

	_getch();
	return 0;
}

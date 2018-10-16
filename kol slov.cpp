#include <iostream>
#include<TCHAR.H>
#include <string.h>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char m[100];
	int a, i, k = 1;
	cout << "Vvedite stroku:" << endl;
	gets_s(m);
	a = strlen(m);
	for (i = 0; i < a; i++)
	{
		if (m[i] == ' ')
			k++;
		else if (m[i] == ',')
			k++;
		else if (m[i] == '.')
			k++;
		else if (m[i] == '\n')
			k++;
	}
	cout << "Koli4estvo slov v stroke=" << k << endl;

	_getch();
	return 0;
}

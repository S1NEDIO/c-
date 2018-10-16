#include <iostream>
using namespace std;

int main()

{
	char str[1000];
	cout << "Vvedite stroku:\n";
	cin >> str;
	cout << endl;

	int chars[256] = { 0 };

	for (int i = 0; str[i]; i++)
		chars[str[i]]++;

	for (int i = 0; i < 256; i++)
		if (chars[i])
			cout << "symbol " << char(i)<<"=" << chars[i] << " raz" << endl;
	system("pause");
	return 0;
}

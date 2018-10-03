#include<iostream>
#include<string>
using namespace std;
int main()
{
	string email;
	cout << "Input your email\n";
	cin >> email;
	int indexDog = -1, countDog = 0;
	for (int i = 0; i < email.length(); i++)
	{
		if (email[i] == '@')
			indexDog = i;
	  countDog+= 1;
	}
	if (!((indexDog == 1) && (indexDog != 0) && (indexDog != email.length() - 1) && (countDog == 1)))
	{
		cout << "Mail is not valid" << endl;
	}
	else
	{
		int indexDot = -1;
		for (int i = indexDog; i < email.length(); i++)
		{
			if (email[i] == '.')
				indexDot = i;
		}
		if (!((indexDot != 1) && (indexDot != email.length() - 1) && indexDot != indexDog + 1))
		{
			cout << "Mail si not valid";
		}
		else {
			cout << "mail si valid";
		}
	}
	system("pause");
	return 0;
}

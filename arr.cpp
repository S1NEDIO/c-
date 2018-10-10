//ввести 2 відсортовані масив розмірністю 10 створити 3 масив в який записати всі елементи з перших двох в порядку їх зростання  
#include<iostream>
using namespace std;
int main()
{
	int arr1[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "arr1["<<i<<"]";
		cin >> arr1[i];
	}
	int arr2[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "arr2[" << i << "]";
		cin >> arr2[i];
	}
	int arr3[20];
	int index1 = 0,index2=0,count=0;
	while (index1 < 10 && index2 < 10)
	{
		if (arr1[index1] <= arr2[index2])
		{
			arr3[count] = arr1[index1];
			index1++;
			count++;
		}
		else
		{
			arr3[count] = arr2[index2];
			index2++;
			count++;
		}
		count++;
	}
	if (index1 == 10)
	{
		for (int i = index2; i < 10; i++) 
		{
			arr3[count] = arr2[i];
			count++;
		}
	}
	else
	{
		for (int i = index1; i < 10; i++)
		{
			arr3[count] = arr1[i];
			count++;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		cout << "arr3[" << i << "]";
	}
	system("pause");
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

void arr_14() 
{
	string name[5] = { "Lena", "Lena", "Lena", "Lena", "Lena" };
	string* m = new string [5];
	for (int i = 0; i < 5; i++)
	{
		m[i] = name[i];
		cout << m[i]<< endl;
	}
}
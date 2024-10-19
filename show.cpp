#include "show.h"
#include <iostream>
using namespace std;

void Show(int* pArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << pArr[i] << endl;
	}
	cout << endl;
}
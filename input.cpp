#include "input.h"
#include <iostream>
using namespace std;

int InputSize()
{
	int size = 0;

	do
	{
		cout << "�������͂��܂����H > " << flush;
		cin >> size;
		if (size <= 0) cout << "�s���Ȓl�����͂���܂���" << endl;
	} while (size <= 0);

	return size;
}
#include "input.h"
#include <iostream>
using namespace std;

int InputSize()
{
	int size = 0;

	do
	{
		cout << "いくつ入力しますか？ > " << flush;
		cin >> size;
		if (size <= 0) cout << "不正な値が入力されました" << endl;
	} while (size <= 0);

	return size;
}
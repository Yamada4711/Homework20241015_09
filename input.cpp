#include "input.h"
#include <iostream>
using namespace std;

int InputSize()
{
	int size = 0;

	do
	{
		cout << "‚¢‚­‚Â“ü—Í‚µ‚Ü‚·‚©H > " << flush;
		cin >> size;
		if (size <= 0) cout << "•s³‚È’l‚ª“ü—Í‚³‚ê‚Ü‚µ‚½" << endl;
	} while (size <= 0);

	return size;
}
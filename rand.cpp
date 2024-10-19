#include "rand.h"
#include <ctime>
#include <iostream>

void InitRand()
{
	srand((unsigned int)time(NULL));
}

void RandomNum(int* pArr, int size, int num1, int num2)
{
	for (int i = 0; i < size; i++)
	{
		// 1から99で初期化
		pArr[i] = rand() % num1 + num2;
	}
}
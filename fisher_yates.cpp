#include "fisher_yates.h"
#include "rand.h"
#include <iostream>
using namespace std;

void FisherYates(int* pArr, int* pArr2, int size)
{
	int countElements = 0;

	do
	{
		// 消されていない数字の数
		int countResidue = 0;

		// ランダムな数
		int k = 0;

		// 消されていない数を数える
		for (int i = 0; i < size; i++)
		{
			if (pArr[i] > 0) countResidue++;
		}

		// ランダムな数を格納する
		k = rand() % countResidue + 1;

		// 消されていない数字の数
		int count = 0;

		// シャッフル
		for (int i = 0; i < size; i++)
		{
			if (pArr[i] > 0)
			{
				count++;
				if (count == k)
				{
					pArr2[countElements] = pArr[i];
					pArr[i] = 0;
					break;
				}
			}
		}
		countElements++;

		if (countElements == size) break;

	} while (true);
}
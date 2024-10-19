#include "fisher_yates.h"
#include "rand.h"
#include <iostream>
using namespace std;

void FisherYates(int* pArr, int* pArr2, int size)
{
	int countElements = 0;

	do
	{
		// ������Ă��Ȃ������̐�
		int countResidue = 0;

		// �����_���Ȑ�
		int k = 0;

		// ������Ă��Ȃ����𐔂���
		for (int i = 0; i < size; i++)
		{
			if (pArr[i] > 0) countResidue++;
		}

		// �����_���Ȑ����i�[����
		k = rand() % countResidue + 1;

		// ������Ă��Ȃ������̐�
		int count = 0;

		// �V���b�t��
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
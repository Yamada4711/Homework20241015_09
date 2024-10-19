#include "input.h"
#include "fisher_yates.h"
#include "rand.h"
#include "show.h"
#include <iostream>
#include<new>
using namespace std;

int main()
{
	// ������̐���
	InitRand();

	// �z��̃T�C�Y�����
	int size = InputSize();

	// �z��̓��I�m��
	int* pArr = new(nothrow) int[size];
	int* pArr2 = new(nothrow) int[size];

	// NULL�`�F�b�N
	if (pArr != nullptr)
	{
		if (pArr2 != nullptr)
		{
			// 1�`99�܂ł̃����_���Ȓl���i�[
			RandomNum(pArr, size, 99, 1);
			RandomNum(pArr2, size, 1, 0);
			Show(pArr, size);

			// ���ёւ�
			FisherYates(pArr, pArr2, size);
			Show(pArr2, size);


			delete[] pArr2;
		}
		else cout << "�z�� pArr2 �̓��I�m�ۂɎ��s���܂����B" << endl;
		delete[] pArr;
	}
	else cout << "�z�� pArr �̓��I�m�ۂɎ��s���܂����B" << endl;
	return 0;
}
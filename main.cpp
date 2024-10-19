#include "input.h"
#include "fisher_yates.h"
#include "rand.h"
#include "show.h"
#include <iostream>
#include<new>
using namespace std;

int main()
{
	// 乱数種の生成
	InitRand();

	// 配列のサイズを入力
	int size = InputSize();

	// 配列の動的確保
	int* pArr = new(nothrow) int[size];
	int* pArr2 = new(nothrow) int[size];

	// NULLチェック
	if (pArr != nullptr)
	{
		if (pArr2 != nullptr)
		{
			// 1～99までのランダムな値を格納
			RandomNum(pArr, size, 99, 1);
			RandomNum(pArr2, size, 1, 0);
			Show(pArr, size);

			// 並び替え
			FisherYates(pArr, pArr2, size);
			Show(pArr2, size);


			delete[] pArr2;
		}
		else cout << "配列 pArr2 の動的確保に失敗しました。" << endl;
		delete[] pArr;
	}
	else cout << "配列 pArr の動的確保に失敗しました。" << endl;
	return 0;
}
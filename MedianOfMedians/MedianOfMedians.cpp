// MedianOfMedians.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <vector>
using namespace std;

void bubbleSort(vector<int>&L)
{
	for (int i = 0; i < L.size() - 1; i++)
	{
		for (int j = 0; j < L.size() - i-1; j++)
		{
			if (L[j] > L[j + 1])
			{
				int temp = L[j];
				L[j] = L[j + 1];
				L[j + 1] = temp;
			}
		}
	}
}

int select(vector<int>L, int k)
{
	int length = L.size();

	if (length <= 5)
	{
		bubbleSort(L);
		return L[k];
	}

	vector<int>subSet;
	for(int i=0; i<)
	return 0;
}


int main()
{
	vector<int> list = { 
		48, 49, 50, 51, 52,
		43, 44, 45, 46, 47, 
		38, 39, 40, 41, 42, 
		33, 34, 35, 36, 37, 
		28, 29, 30, 31, 32, 
		23, 24, 25, 26, 27, 
		18, 19, 20, 21, 22, 
		13, 14, 15, 16, 17,
		8, 9, 10, 53, 54 };

	bubbleSort(list);

	for(int i=0; i<list.size(); i++)
		printf("%d ", list[i]);

    return 0;
}


#pragma once
#include <iostream>
//	���� �迭�� ������
typedef struct _tabArr
{
	int* pInt;
	int		iCount;
	int		iMaxCount;
}tArr;

//	�迭 �ʱ�ȭ �Լ�
void InitArr(tArr* _pArr);

//	������ �߰� �Լ�
void PushBack(tArr* _pArr, int _iData);

//	���� �߰� Ȯ�� (���ο��� ȣ������ ���ϰ� �ϱ� ���� ������� ������ ���� ����.)
//void Reallocate(tArr* _pArr);

//	�迭 �޸� ���� �Լ�
void ReleaseArr(tArr* _pArr);
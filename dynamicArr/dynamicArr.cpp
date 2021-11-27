// dynamicArr.cpp : 애플리케이션의 진입점을 정의합니다.
//
#include "Array.h"
#include "dynamicArr.h"

using namespace std;

int main()
{
	cout << "Dynamic Array" << endl;

	//	가변배열

	tArr s = {};
	InitArr(&s);


	for (int i = 0; i < 10; i++) {
		PushBack(&s, i);
	}

	for (int i = 0; i < s.iCount; i++) {
		cout << s.pInt[i] << endl;
	}

	ReleaseArr(&s);


	for (int i = 0; i < s.iCount; i++) {
		cout << s.pInt[i] << endl;
	}

	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	// 1. 입력받을 2개의 변수 선언
	int firstNum = 0;
	int secondNum = 0;

	// 2. 두 수의 입력받아 연산
	cout << "첫번째 수 입력 : ";
	cin >> firstNum;

	cout << "두번째 수 입력 : ";
	cin >> secondNum;

	// 3. 두 수와 결과값 출력
	cout << "더한 결과는 : " << firstNum << '+' << secondNum << '=' << firstNum + secondNum << endl;

	return 0;
}
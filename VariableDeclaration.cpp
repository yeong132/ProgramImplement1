#include <iostream>

using namespace std;

int main()
{
	// 1. �Է¹��� 2���� ���� ����
	int firstNum = 0;
	int secondNum = 0;

	// 2. �� ���� �Է¹޾� ����
	cout << "ù��° �� �Է� : ";
	cin >> firstNum;

	cout << "�ι�° �� �Է� : ";
	cin >> secondNum;

	// 3. �� ���� ����� ���
	cout << "���� ����� : " << firstNum << '+' << secondNum << '=' << firstNum + secondNum << endl;

	return 0;
}
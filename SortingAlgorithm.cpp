// ù��° ���� �����Դϴ�!!
#include <iostream>

using namespace std;

// N���� �Է��� �޾Ƶ� ��� �������� �ϴ� �ִ� �л� ���� �־�� �Ѵ�.
const int max_input = 100;

void sortAscending(double arr[], int size);   // �������� ���� ����
void sortDescending(double arr[], int size);  // �������� ���� ����
void printArray(double arr[], int size);      // �迭 ��� ����

int main() {

    int input;
    int sort;
    // ���� �迭 ����
    double numbers[max_input];

    cout << "�迭�� �� ���� ���ڸ� ���� ���� �����ּ���!" << endl;
    cout << "2 ~ " << max_input << " ���� ���ڸ� �Է��ϼ���. �Է°� : ";
    cin >> input;

    while (input > max_input || input < 2 || input < 0) {
        cout << "�Է��� �߸��Ǿ����ϴ�. 2 ~" << max_input << " ���� ���ڸ� �Է��ϼ���. �Է°� : ";
        cin >> input;
    }

    // ���� �Է� �ޱ�(for�� �̿�)
    for (int i = 0; i < input; i++) {
        cout << i + 1 << " ��° ���ڸ� �Է����ּ��� : ";
        cin >> numbers[i];
    }

    cout << "����� �Է��� �⺻ �迭�Դϴ�." << endl;
    printArray(numbers, input);
    cout << "�����մϴ�! ���� �迭�� ����������� ������ �غ��ô�!" << endl << endl;
	
	cout << "1�� �Է��ϸ� �������� ����, 2�� �Է��ϸ� �������� ������ �˴ϴ�!" << endl;
	cout << "1 �Ǵ� 2�� �Է����ּ���!" << endl;
	cin >> sort;

	switch (sort) {
		case 1:
            sortAscending(numbers, input);
            break;  // 1�� ���̽� ���� �� ����
		case 2:
            sortDescending(numbers, input);
            break;  // 2�� ���̽� ���� �� ����
	}
    printArray(numbers, input);
    // break �� ���� �����ϴϱ� 1�� �Է��ص� �������� ������ ����..

	return 0;
}

// ���� �˻���� ������ ����Ҷ� swap()�̶� �Լ��� �ʼ�����!!
// ������ �䱸������ �ǵ��� �װ� �ƴѰ� ����. �׳� �غ���..

// �������� ���� ���� - �ִ��� gpt���� �غ���..
// 1. �ϴ� for���� �־ ������ ������Ų��.
// 2. ������ ���ø� ���. arr[5] = {5 ,4, 7, 1 ,9}; ��� �����غ���
// 3. �迭 �ε����� �հ� ���� ���� ���� ���Ͽ��� ��ġ�� �ٲ��� �Ѵ�.
// 4. ���� ������ ū ���� ������ ������ ��ġ�� �ٲ㺸��!
// 5. ���� ū ���� �ڷ� ������ �ȴ�!
// 6. size - i�� ���� �񱳸� ���� ���ҵ�� ��ܿ��� ���� �����ߴ�.
// 7. ���࿡ size�� 5�� for��(i)�� ������ �������� i�� 3���� ������.
// 8. �׷��ٸ� size-i�� 5-3 = 2�� �ȴ�. �׷� for��(p)�� ������ ������ 1�� ������.
// 9. �̹� �񱳸� �ؼ� ū ���� Ȯ������ ��ġ�� �־� ���� ������ �� �񱳸� �� �ʿ䰡 ����.
// 10. �׷��� ������ ������ p���� 0���� ������ �ؼ� 
// 11. �迭�� �ε��� ��, �� ���� ���ϴ� for��(p)�� 1���� ���� �ߴ�.
void sortAscending(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int p = 0; p < size - i - 1; ++p) {
            if (arr[p] > arr[p + 1]) {
                double temp = arr[p + 1];
                arr[p + 1] = arr[p];
                arr[p] = temp;
            }
        }
    }
}

// �������� ���� ����
// ���������� ū ������ 4..3..2..1.�� ���ĵǴ� �����̴�.
// �׷��� ���� ���� ���� �ڷ� �������Ѵ�.
// ���������� �߰��� if()���� ���ϴ� �����ڸ� �ݴ�� �ٲٸ� �ɰ� ����.
// ������ ������ �¾Ҵ�!
void sortDescending(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int p = 0; p < size - i - 1; ++p) {
            if (arr[p] < arr[p + 1]) {
                double temp = arr[p + 1];
                arr[p + 1] = arr[p];
                arr[p] = temp;
            }
        }
    }
}

// �迭 ��� ����
void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
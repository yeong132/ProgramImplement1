// ù��° �ʼ� �����Դϴ�!!
#include <iostream>

using namespace std;

// N���� �Է��� �޾Ƶ� ��� �������� �ϴ� �ִ� �л� ���� �־�� �Ѵ�.
const int max_stu = 100;

// ���⼭ scores�� �迭�� ����� ���� �ε����� �ҷ��ͼ� �� �����ش�.
double calculateTotalScore(double scores[], int n) {
    double total = 0; // �հ� total �ʱ�ȭ
    for (int i = 0; i < n; i++) {
        total += scores[i];
    }
    return total;
}

double calculateAverageScore(double scores[], int n) {
    double total = calculateTotalScore(scores, n);
    return total / n;
}

int main()
{
    // 1. �л����� ������ �迭�� �Է¹޾ƾ� �Ѵ�.(N���� �Է��� �޾Ƶ� ����� ����� �Ѵ�.)
    // 2. �Է¹��� ������ �հ�� ����� ���ϴ� ������ ���� �Լ��� ���� �Ѵ�.
    // N���� �Է��� �������� �� ���� �л� ������ ���� ���� ���� n�� �ʿ��ϴ�.
    int n;
    cout << "������ ����� �л� ���� �Է��ϼ���! �ִ�" << max_stu << "�� �л� �� : ";
    cin >> n;

    while (n > max_stu || n < 2 || n < 0) {
        cout << "�Է��� �߸��Ǿ����ϴ�. 2 ~" << max_stu << " ���� ���ڸ� �Է��ϼ���. �л� �� : ";
        cin >> n;
    }
   
    // ���� �迭 ����
    double scores[max_stu];

    // ���� �Է� �ޱ�(for�� �̿�)
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " ��° �л� ������ �Է����ּ��� : ";
        cin >> scores[i];
    }

    // �Լ� ȣ���� ���� ��ȣ �ȿ� ���ڿ� Ÿ���� ������ �ʾƵ� �ȴ�!
    cout << "���� �հ� : " << calculateTotalScore(scores, n) << endl;
    cout << "���� ��� : " << calculateAverageScore(scores, n) << endl;

    return 0;
}
// 첫번째 필수 과제입니다!!
#include <iostream>

using namespace std;

// N개의 입력을 받아도 상관 없으려면 일단 최대 학생 수가 있어야 한다.
const int max_stu = 100;

// 여기서 scores의 배열에 저장된 값에 인덱스를 불러와서 다 더해준다.
double calculateTotalScore(double scores[], int n) {
    double total = 0; // 합계 total 초기화
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
    // 1. 학생들의 점수를 배열로 입력받아야 한다.(N개의 입력을 받아도 상관이 없어야 한다.)
    // 2. 입력받은 점수의 합계와 평균을 구하는 동작은 따로 함수로 빼야 한다.
    // N개의 입력을 받으려면 몇 명의 학생 점수를 받을 건지 변수 n이 필요하다.
    int n;
    cout << "성적을 계산할 학생 수를 입력하세요! 최대" << max_stu << "명 학생 수 : ";
    cin >> n;

    while (n > max_stu || n < 2 || n < 0) {
        cout << "입력이 잘못되었습니다. 2 ~" << max_stu << " 사이 숫자를 입력하세요. 학생 수 : ";
        cin >> n;
    }
   
    // 정적 배열 생성
    double scores[max_stu];

    // 점수 입력 받기(for문 이용)
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " 번째 학생 점수를 입력해주세요 : ";
        cin >> scores[i];
    }

    // 함수 호출할 때는 괄호 안에 인자에 타입을 붙이지 않아도 된다!
    cout << "점수 합계 : " << calculateTotalScore(scores, n) << endl;
    cout << "점수 평균 : " << calculateAverageScore(scores, n) << endl;

    return 0;
}